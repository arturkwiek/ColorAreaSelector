#include "colorselectordlg.h"
#include "ui_colorselectordlg.h"

ColorSelectorDlg::ColorSelectorDlg(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ColorSelectorDlg)
{
    ui->setupUi(this);
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

ColorSelectorDlg::~ColorSelectorDlg()
{
    delete ui;
}

