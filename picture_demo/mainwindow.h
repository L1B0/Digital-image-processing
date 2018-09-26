#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <func.h>
#include <bitplane.h>

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

private slots:
    void open();
    void save();
    void on_re_determine_clicked();
    void on_gray_determine_clicked();
    void on_bitPlane_clicked();

private:
    Ui::MainWindow *ui;
    QAction *openAction,*saveAction;

};

#endif // MAINWINDOW_H
