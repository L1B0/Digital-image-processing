#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <mypic.h>
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
    void pointCalc(int pointType);
    void histogramEqualization(QImage nowImage);

private slots:
    void open();
    void save();

    void on_gray_determine_clicked();
    void on_sampling_clicked();
    void on_bitplane_save_clicked();

    void on_threshold_update_clicked();

    void on_line_push_clicked();

    void on_nline_push1_clicked();

    void on_nline_push2_clicked();

private:
    Ui::MainWindow *ui;
    QAction *openAction,*saveAction;

};

#endif // MAINWINDOW_H
