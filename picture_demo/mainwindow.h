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
    void mysave_bitplane();
    void myshow_bitplane();
    void myshow(int num, char flag);
    void create_histogram();
    void create_histogram_info(double *image_gray);
    void create_histogram_paint(double *image_gray);

private slots:
    void open();
    void save();

    void on_gray_determine_clicked();
    void on_sampling_clicked();
    void on_bitplane_save_clicked();

    void on_threshold_update_clicked();

private:
    Ui::MainWindow *ui;
    QAction *openAction,*saveAction;

};

#endif // MAINWINDOW_H
