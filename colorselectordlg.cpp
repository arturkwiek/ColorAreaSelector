#include "colorselectordlg.h"
#include "ui_colorselectordlg.h"

ColorSelectorDlg::ColorSelectorDlg(QWidget *parent)
    : QDialog(parent)
    , uiHSVHMin(0)
    , uiHSVSMin(0)
    , uiHSVVMin(0)
    , uiHSVHMax(0)
    , uiHSVSMax(0)
    , uiHSVVMax(0)
    , ui(new Ui::ColorSelectorDlg)
{

    ui->setupUi(this);
    //    'black': [[180, 255, 30], [0, 0, 0]],
    if(false)
    {
        uiHSVHMax = 180;
        uiHSVSMax = 255;
        uiHSVVMax = 30;
        uiHSVHMin = 0;
        uiHSVSMin = 0;
        uiHSVVMin = 0;
    }
    //    'white': [[180, 18, 255], [0, 0, 231]],
    if(true)
    {
        uiHSVHMax = 180;
        uiHSVSMax = 18;
        uiHSVVMax = 255;
        uiHSVHMin = 0;
        uiHSVSMin = 0;
        uiHSVVMin = 231;
    }
    //    'red1': [[180, 255, 255], [159, 50, 70]],
    if(false)
    {
        uiHSVHMax = 180;
        uiHSVSMax = 255;
        uiHSVVMax = 255;
        uiHSVHMin = 159;
        uiHSVSMin = 50;
        uiHSVVMin = 70;
    }
    //    'red2': [[9, 255, 255], [0, 50, 70]],
    if(false)
    {
        uiHSVHMax = 9;
        uiHSVSMax = 255;
        uiHSVVMax = 255;
        uiHSVHMin = 0;
        uiHSVSMin = 50;
        uiHSVVMin = 70;
    }
    //'green': [[89, 255, 255], [36, 50, 70]],
    if(false)
    {
        uiHSVHMax = 89;
        uiHSVSMax = 255;
        uiHSVVMax = 255;
        uiHSVHMin = 36;
        uiHSVSMin = 50;
        uiHSVVMin = 70;
    }
    //    'blue': [[128, 255, 255], [90, 50, 70]],
    if(false)
    {
        uiHSVHMax = 128;
        uiHSVSMax = 255;
        uiHSVVMax = 255;
        uiHSVHMin = 90;
        uiHSVSMin = 50;
        uiHSVVMin = 70;
    }
    //    'yellow': [[35, 255, 255], [25, 50, 70]],
    if(false)
    {
        uiHSVHMax = 35;
        uiHSVSMax = 255;
        uiHSVVMax = 255;
        uiHSVHMin = 25;
        uiHSVSMin = 50;
        uiHSVVMin = 70;
    }
    //    'purple': [[158, 255, 255], [129, 50, 70]],
    if(false)
    {
        uiHSVHMax = 158;
        uiHSVSMax = 255;
        uiHSVVMax = 255;
        uiHSVHMin = 129;
        uiHSVSMin = 50;
        uiHSVVMin = 70;
    }
    //    'orange': [[24, 255, 255], [10, 50, 70]],
    if(false)
    {
        uiHSVHMax = 24;
        uiHSVSMax = 255;
        uiHSVVMax = 255;
        uiHSVHMin = 10;
        uiHSVSMin = 50;
        uiHSVVMin = 70;
    }
    //    'gray': [[180, 18, 230], [0, 0, 40]],
    if(false)
    {
        uiHSVHMax = 180;
        uiHSVSMax = 18;
        uiHSVVMax = 230;
        uiHSVHMin = 0;
        uiHSVSMin = 0;
        uiHSVVMin = 40;
    }

    //    QLabel* label = new QLabel();
    //    label->setAutoFillBackground(true);
    //    QPalette palette = label->palette();
    //    QColor color;
    //    color.setHsv(10, 10, 10);
    //    palette.setColor(label->backgroundRole(), color);
    //    label->setPalette(palette);
}


void ColorSelectorDlg::setSourceImage(QImage img)
{
    ui->lblSource->setPixmap(QPixmap::fromImage(img));
    ui->lblSource->show();
    ui->lblSource->setScaledContents(true);
}

void ColorSelectorDlg::setCannyImage(QImage img)
{
    ui->lblCannyObj->setPixmap(QPixmap::fromImage(img));
    ui->lblCannyObj->show();
    ui->lblCannyObj->setScaledContents(true);

}
// -- RGB Min
uint8_t ColorSelectorDlg::getRGBRMin() const
{
    return uiRGBRMin;
}

void ColorSelectorDlg::setRGBRMin(const uint8_t &value)
{
    uiRGBRMin = value;
}

uint8_t ColorSelectorDlg::getRGBGMin() const
{
    return uiRGBGMin;
}

void ColorSelectorDlg::setRGBGMin(const uint8_t &value)
{
    uiRGBGMin = value;
}

uint8_t ColorSelectorDlg::getRGBBMin() const
{
    return uiRGBBMin;
}

void ColorSelectorDlg::setRGBBMin(const uint8_t &value)
{
    uiRGBBMin = value;
}

// -- HSV Min
uint8_t ColorSelectorDlg::getHSVHMin() const
{
    return uiHSVHMin;
}

void ColorSelectorDlg::setHSVHMin(const uint8_t &value)
{
    uiHSVHMin = value;
}

uint8_t ColorSelectorDlg::getHSVSMin() const
{
    return uiHSVSMin;
}

void ColorSelectorDlg::setHSVSMin(const uint8_t &value)
{
    uiHSVSMin = value;
}

uint8_t ColorSelectorDlg::getHSVVMin() const
{
    return uiHSVVMin;
}

void ColorSelectorDlg::setHSVVMin(const uint8_t &value)
{
    uiHSVVMin = value;
}

// -- RGB Max
uint8_t ColorSelectorDlg::getRGBRMax() const
{
    return uiRGBRMax;
}

void ColorSelectorDlg::setRGBRMax(const uint8_t &value)
{
    uiRGBRMax = value;
}

uint8_t ColorSelectorDlg::getRGBGMax() const
{
    return uiRGBGMax;
}

void ColorSelectorDlg::setRGBGMax(const uint8_t &value)
{
    uiRGBGMax = value;
}

uint8_t ColorSelectorDlg::getRGBBMax() const
{
    return uiRGBBMax;
}

void ColorSelectorDlg::setRGBBMax(const uint8_t &value)
{
    uiRGBBMax = value;
}
// -- HSV Max
uint8_t ColorSelectorDlg::getHSVHMax() const
{
    return uiHSVHMax;
}

void ColorSelectorDlg::setHSVHMax(const uint8_t &value)
{
    uiHSVHMax = value;
}

uint8_t ColorSelectorDlg::getHSVSMax() const
{
    return uiHSVSMax;
}

void ColorSelectorDlg::setHSVSMax(const uint8_t &value)
{
    uiHSVSMax = value;
}

uint8_t ColorSelectorDlg::getHSVVMax() const
{
    return uiHSVVMax;
}

void ColorSelectorDlg::setHSVVMax(const uint8_t &value)
{
    uiHSVVMax = value;
}

void ColorSelectorDlg::setHSVMin()
{
    ui->lblHSVMin->setText(QString("(%1,%2,%3)").arg(uiHSVHMin).arg(uiHSVSMin).arg(uiHSVVMin));
    ui->lblHSVMin->setStyleSheet(QString("background-color: hsv(%1, %2%, %3%); color: hsv(%1, %2, %3);").arg(uiHSVHMin).arg(uiHSVSMin).arg(uiHSVVMin).arg((uiHSVHMin + 180) % 360).arg(255-uiHSVSMin).arg(255-uiHSVVMin));
}

void ColorSelectorDlg::setHSV()
{
    ui->hsHSVHMin->setValue(uiHSVHMin);
    ui->hsHSVSMin->setValue(uiHSVSMin);
    ui->hsHSVVMin->setValue(uiHSVVMin);
    ui->hsHSVHMax->setValue(uiHSVHMax);
    ui->hsHSVSMax->setValue(uiHSVSMax);
    ui->hsHSVVMax->setValue(uiHSVVMax);
}

void ColorSelectorDlg::setRGBMin()
{
    ui->lblRGBMin->setText(QString("(%1,%2,%3)").arg(uiRGBRMin).arg(uiRGBGMin).arg(uiRGBBMin));
    ui->lblRGBMin->setStyleSheet(QString("background-color: rgb(%1, %2%, %3%); color: rgb(%1, %2, %3);").arg(uiRGBRMin).arg(uiRGBGMin).arg(uiRGBBMin).arg(255-uiRGBRMin).arg(255-uiRGBGMin).arg(255-uiRGBBMin));
}

void ColorSelectorDlg::setHSVMax()
{
    ui->lblHSVMax->setText(QString("(%1,%2,%3)").arg(uiHSVHMax).arg(uiHSVSMax).arg(uiHSVVMax));
    ui->lblHSVMax->setStyleSheet(QString("background-color: hsv(%1, %2%, %3%); color: hsv(%1, %2, %3);").arg(uiHSVHMax).arg(uiHSVSMax).arg(uiHSVVMax).arg((uiHSVHMax + 180) % 360).arg(255-uiHSVSMax).arg(255-uiHSVVMax));
}

void ColorSelectorDlg::setRGBMax()
{
    ui->lblRGBMax->setText(QString("(%1,%2,%3)").arg(uiRGBRMax).arg(uiRGBGMax).arg(uiRGBBMax));
    ui->lblRGBMax->setStyleSheet(QString("background-color: rgb(%1, %2%, %3%); color: rgb(%1, %2, %3);").arg(uiRGBRMax).arg(uiRGBGMax).arg(uiRGBBMax).arg(255-uiRGBRMax).arg(255-uiRGBGMax).arg(255-uiRGBBMax));
}


ColorSelectorDlg::~ColorSelectorDlg()
{
    delete ui;
}


void ColorSelectorDlg::on_hsHSVHMin_valueChanged(int value)
{
    setHSVHMin(value);
    ui->lblHSV_HVMin->setText(QString::number(value));
    setHSVMin();
}

void ColorSelectorDlg::on_hsHSVSMin_valueChanged(int value)
{
    setHSVSMin(value);
    ui->lblHSV_SVMin->setText(QString::number(value));
    setHSVMin();
}

void ColorSelectorDlg::on_hsHSVVMin_valueChanged(int value)
{
    setHSVVMin(value);
    ui->lblHSV_VVMin->setText(QString::number(value));
    setHSVMin();
}

void ColorSelectorDlg::on_hsRGBRMin_valueChanged(int value)
{
    setRGBRMin(value);
    ui->lblRGB_RVMin->setText(QString::number(value));
    setRGBMin();
}

void ColorSelectorDlg::on_hsRGBGMin_valueChanged(int value)
{
    setRGBGMin(value);
    ui->lblRGB_GVMin->setText(QString::number(value));
    setRGBMin();
}

void ColorSelectorDlg::on_hsRGBBMin_valueChanged(int value)
{
    setRGBBMin(value);
    ui->lblRGB_BVMin->setText(QString::number(value));
    setRGBMin();
}

void ColorSelectorDlg::on_hsHSVHMax_valueChanged(int value)
{
    setHSVHMax(value);
    ui->lblHSV_HVMax->setText(QString::number(value));
    setHSVMax();
}

void ColorSelectorDlg::on_hsHSVSMax_valueChanged(int value)
{
    setHSVSMax(value);
    ui->lblHSV_SVMax->setText(QString::number(value));
    setHSVMax();
}

void ColorSelectorDlg::on_hsHSVVMax_valueChanged(int value)
{
    setHSVVMax(value);
    ui->lblHSV_VVMax->setText(QString::number(value));
    setHSVMax();
}

void ColorSelectorDlg::on_hsRGBRMax_valueChanged(int value)
{
    setRGBRMax(value);
    ui->lblRGB_RVMax->setText(QString::number(value));
    setRGBMax();
}

void ColorSelectorDlg::on_hsRGBGMax_valueChanged(int value)
{
    setRGBGMax(value);
    ui->lblRGB_GVMax->setText(QString::number(value));
    setRGBMax();
}

void ColorSelectorDlg::on_hsRGBBMax_valueChanged(int value)
{
    setRGBBMax(value);
    ui->lblRGB_BVMax->setText(QString::number(value));
    setRGBMax();
}

void ColorSelectorDlg::on_btnGreen_clicked()
{
    uiHSVHMax = 89;
    uiHSVSMax = 255;
    uiHSVVMax = 255;
    uiHSVHMin = 36;
    uiHSVSMin = 50;
    uiHSVVMin = 70;

    setHSV();
    //    ui->hsHSVHMin->setValue(30);
    //    ui->hsHSVSMin->setValue(50);//(30, 50, 50);
    //    ui->hsHSVVMin->setValue(50);

    //    ui->hsHSVHMax->setValue(90);
    //    ui->hsHSVSMax->setValue(255);//(90, 255, 255);
    //    ui->hsHSVVMax->setValue(255);
}

void ColorSelectorDlg::on_btnRed_clicked()
{
    uiHSVHMax = 180;
    uiHSVSMax = 255;
    uiHSVVMax = 255;
    uiHSVHMin = 159;
    uiHSVSMin = 50;
    uiHSVVMin = 70;

    setHSV();

    //            uiHSVHMax = 9;
    //            uiHSVSMax = 255;
    //            uiHSVVMax = 255;
    //            uiHSVHMin = 0;
    //            uiHSVSMin = 50;
    //            uiHSVVMin = 70;
}

void ColorSelectorDlg::on_btnBlue_clicked()
{
    uiHSVHMax = 128;
    uiHSVSMax = 255;
    uiHSVVMax = 255;
    uiHSVHMin = 90;
    uiHSVSMin = 50;
    uiHSVVMin = 70;

    setHSV();

    //    ui->hsHSVHMin->setValue(110);
    //    ui->hsHSVSMin->setValue(50);//(30, 50, 50);
    //    ui->hsHSVVMin->setValue(50);

    //    ui->hsHSVHMax->setValue(130);
    //    ui->hsHSVSMax->setValue(255);//(130,255,255);
    //    ui->hsHSVVMax->setValue(255);

}

void ColorSelectorDlg::on_btnBlack_clicked()
{
    uiHSVHMax = 180;
    uiHSVSMax = 255;
    uiHSVVMax = 30;
    uiHSVHMin = 0;
    uiHSVSMin = 0;
    uiHSVVMin = 0;

    setHSV();
}


void ColorSelectorDlg::on_btnWhite_clicked()
{
    uiHSVHMax = 180;
    uiHSVSMax = 18;
    uiHSVVMax = 255;
    uiHSVHMin = 0;
    uiHSVSMin = 0;
    uiHSVVMin = 231;

    setHSV();
}


void ColorSelectorDlg::on_btnYellow_clicked()
{
    uiHSVHMax = 35;
    uiHSVSMax = 255;
    uiHSVVMax = 255;
    uiHSVHMin = 25;
    uiHSVSMin = 50;
    uiHSVVMin = 70;

    setHSV();
}


void ColorSelectorDlg::on_btnPurple_clicked()
{
    uiHSVHMax = 158;
    uiHSVSMax = 255;
    uiHSVVMax = 255;
    uiHSVHMin = 129;
    uiHSVSMin = 50;
    uiHSVVMin = 70;

    setHSV();
}


void ColorSelectorDlg::on_btnOrange_clicked()
{
    uiHSVHMax = 24;
    uiHSVSMax = 255;
    uiHSVVMax = 255;
    uiHSVHMin = 10;
    uiHSVSMin = 50;
    uiHSVVMin = 70;

    setHSV();
}


void ColorSelectorDlg::on_btnGray_clicked()
{
    uiHSVHMax = 180;
    uiHSVSMax = 18;
    uiHSVVMax = 230;
    uiHSVHMin = 0;
    uiHSVSMin = 0;
    uiHSVVMin = 40;

    setHSV();
}

