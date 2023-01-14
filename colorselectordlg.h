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
private:
    Ui::ColorSelectorDlg *ui;
};
#endif // COLORSELECTORDLG_H
