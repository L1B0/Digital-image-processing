#ifndef BITPLANE_H
#define BITPLANE_H

#include <func.h>

namespace Ui {
class bitplane;
}

class bitplane : public QWidget
{
    Q_OBJECT

public:
    explicit bitplane(QWidget *parent = 0);
    ~bitplane();
    void myshow_bitplane();
    void myshow(int num, char flag);
    int getBit(int, int);

private slots:
    void mysave_bitplane();

private:
    Ui::bitplane *ui;
    QAction *saveAction;
};

#endif // BITPLANE_H
