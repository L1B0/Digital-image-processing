#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <mypic.h>

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
    void clear_all_text();
    bool check_input(QLineEdit *labeltest);
    void mysave_bitplane();
    void myshow_bitplane();
    void myshow(int num, char flag);
    void create_histogram(QCustomPlot *nowlabel, QImage nowImage, bool flag);
    void create_histogram_info(QImage nowImage, double *image_gray, bool flag);
    void create_histogram_paint(QCustomPlot *nowlabel, double *image_gray);
    void point_calc(int pointType);
    void histogram_equalization(QImage nowImage);

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
