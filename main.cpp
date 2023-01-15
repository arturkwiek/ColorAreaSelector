#include "colorselectordlg.h"

#include <QApplication>
#include <QFile>
#include <QDebug>

#include <opencv2/opencv.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/calib3d.hpp>
#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>


#define qout(x) qDebug() << x << endl

using namespace cv;
using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ColorSelectorDlg w;

    Mat img;
    int key;
    VideoCapture capture(0);

    for(;;)
    {
        qDebug() << "ooo";
        capture >> img;

        flip(img,img,1);

        Mat img2,img3;

        // Przekształcenie obrazu na HSV
        cv::Mat hsv;
        cv::cvtColor(img, hsv, cv::COLOR_BGR2HSV);

        // Określenie zakresów dolnego i górnego koloru zielonego
        cv::Scalar lower_green(30, 50, 50);
        cv::Scalar upper_green(90, 255, 255);
        // Wyodrębnienie obszaru zielonego z obrazu
        cv::Mat mask;
        cv::inRange(hsv, lower_green, upper_green, mask);

        // wykrycie krawędzi
        cv::Mat edges;
        cv::Canny(mask, edges, 50, 150);

        key = waitKey(70);
        QCoreApplication::processEvents();

        switch(key) {
        case 'q': return 0;
        case 'w':
            w.show();
            key = 0;
            break;
        case 'g':
            //        b_gray != b_gray;
            key = 0;
            break;
        case 't':
            //            b_threashold != b_threashold;
            key = 0;
            break;
        case 'r':
            //        b_resize = !b_resize;
            key = 0;
            break;
        default: break;// if(key) tap("key: " << key);
        }
        if(edges.empty())
            qDebug() << "empty";
        //        imshow("edges",edges);
        cv::cvtColor(img, img2, COLOR_BGR2RGB);
        QImage qimgSource = QImage((const unsigned char*)(img2.data), img2.cols, img2.rows, QImage::Format_RGB888);


        // Połączenie obrazu źródłowego i krawędzi
        cv::Mat result;
        cv::cvtColor(mask, img3, COLOR_GRAY2RGB);
        bitwise_and(img,img3,result);
//                cv::addWeighted(img, 0.9, img3, 0.1, 0, result);
//        cv::cvtColor(result, img3, COLOR_BGR2RGB);
        QImage qimgCanny = QImage((const unsigned char*)(result.data), result.cols, result.rows, QImage::Format_RGB888);

        w.show();
        w.setSourceImage(qimgSource);
        w.setCannyImage(qimgCanny);
    }

    return a.exec();
}
