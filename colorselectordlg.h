#ifndef COLORSELECTORDLG_H
#define COLORSELECTORDLG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class ColorSelectorDlg; }
QT_END_NAMESPACE

class ColorSelectorDlg : public QDialog
{
    Q_OBJECT

public:
    ColorSelectorDlg(QWidget *parent = nullptr);
    ~ColorSelectorDlg();

    void setSourceImage(QImage img);
    void setCannyImage(QImage img);

    //-- Min
    uint8_t getRGBRMin() const;
    void setRGBRMin(const uint8_t &value);

    uint8_t getRGBGMin() const;
    void setRGBGMin(const uint8_t &value);

    uint8_t getRGBBMin() const;
    void setRGBBMin(const uint8_t &value);

    uint8_t getHSVHMin() const;
    void setHSVHMin(const uint8_t &value);

    uint8_t getHSVSMin() const;
    void setHSVSMin(const uint8_t &value);

    uint8_t getHSVVMin() const;
    void setHSVVMin(const uint8_t &value);

    //-- Max
    uint8_t getRGBRMax() const;
    void setRGBRMax(const uint8_t &value);

    uint8_t getRGBGMax() const;
    void setRGBGMax(const uint8_t &value);

    uint8_t getRGBBMax() const;
    void setRGBBMax(const uint8_t &value);

    uint8_t getHSVHMax() const;
    void setHSVHMax(const uint8_t &value);

    uint8_t getHSVSMax() const;
    void setHSVSMax(const uint8_t &value);

    uint8_t getHSVVMax() const;
    void setHSVVMax(const uint8_t &value);

    void setHSVMin();


//    uint8_t getRGBRMin() const;
//    void setrRGBR(const uint8_t &value);

//    uint8_t getRGBG() const;
//    void setRGBG(const uint8_t &value);

//    uint8_t getRGBB() const;
//    void setRGBB(const uint8_t &value);

//    uint8_t getHSVH() const;
//    void setHSVH(const uint8_t &value);

//    uint8_t getHSVS() const;
//    void setHSVS(const uint8_t &value);

//    uint8_t getHSVV() const;
//    void setHSVV(const uint8_t &value);

    void setRGBMin();
    void setHSVMax();
    void setRGBMax();
private slots:

    void on_hsHSVHMin_valueChanged(int value);

    void on_hsHSVSMin_valueChanged(int value);

    void on_hsHSVVMin_valueChanged(int value);

    void on_hsRGBRMin_valueChanged(int value);

    void on_hsRGBGMin_valueChanged(int value);

    void on_hsRGBBMin_valueChanged(int value);



    void on_hsHSVHMax_valueChanged(int value);

    void on_hsHSVSMax_valueChanged(int value);

    void on_hsHSVVMax_valueChanged(int value);

    void on_hsRGBRMax_valueChanged(int value);

    void on_hsRGBGMax_valueChanged(int value);

    void on_hsRGBBMax_valueChanged(int value);


    void on_btnGreen_clicked();

    void on_btnRed_clicked();

    void on_btnBlue_clicked();

private:
    Ui::ColorSelectorDlg *ui;

    uint8_t uiRGBRMin;
    uint8_t uiRGBGMin;
    uint8_t uiRGBBMin;

    uint8_t uiHSVHMin;
    uint8_t uiHSVSMin;
    uint8_t uiHSVVMin;


    uint8_t uiRGBRMax;
    uint8_t uiRGBGMax;
    uint8_t uiRGBBMax;

    uint8_t uiHSVHMax;
    uint8_t uiHSVSMax;
    uint8_t uiHSVVMax;
};
#endif // COLORSELECTORDLG_H
