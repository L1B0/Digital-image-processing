#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <mypic.h>
#include <imagesmooth.h>
#include <imagesharpen.h>
#include "imagesharpenmode.h"
#include <QScrollArea>
class QAction;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void clearAllText();
    bool checkInput(QLineEdit *labeltest);
    void mySaveBitplane();
    void myShowBitplane();
    void myShow(int num, char flag);
    void createHistogram(QCustomPlot *nowlabel, QImage nowImage, bool flag);
    void createHistogramInfo(QImage nowImage, double *image_gray, bool flag);
    void createHistogramPaint(QCustomPlot *nowlabel, double *image_gray);
    QImage* pointCalc(int pointType);
    void histogramEqualization(QImage nowImage);
    void imageSmoothAverage(int mode);
    void imageSmoothMid(int mode);
    void imageSmoothNeighbor(int mode);
    void imageSharpenTrans(imageSharpen b, int mode,int x, int y);

private slots:
    void open();
    //void save();

    void on_gray_determine_clicked();
    void on_sampling_clicked();
    void on_bitplane_save_clicked();

    void on_threshold_update_clicked();

    void on_line_push_clicked();

    void on_nline_push1_clicked();

    void on_nline_push2_clicked();

    void on_nearest_horizontalSlider_valueChanged(int value);

    void on_bilinear_horizontalSlider_valueChanged(int value);

    void on_nearest_spin_push_clicked();

    void on_bilinear_spin_push_clicked();

    void on_action_saveMenu_triggered();

    void on_averageType1_clicked();

    void on_averageType2_clicked();

    void on_averageType3_clicked();

    void on_midType1_clicked();

    void on_midType2_clicked();

    void on_midType3_clicked();

    void on_neighborType1_clicked();

    void on_neighborType2_clicked();

    void on_sharpenRoberts_clicked();

    void on_sharpenSobel_clicked();

    void on_sharpenLapla_clicked();

    void on_sharpenmode_clicked();

private:
    Ui::MainWindow *ui;
    QAction *openAction;//*saveAction;
    QPalette pale;
};

#endif // MAINWINDOW_H
