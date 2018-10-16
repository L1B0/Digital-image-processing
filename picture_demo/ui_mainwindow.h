/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>
#include "mywidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *openFile;
    QAction *saveFIle;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *original;
    QLabel *nearest_insert;
    QLabel *bilinear_insert;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_26;
    QLabel *bilinear_level;
    QSlider *bilinear_horizontalSlider;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_25;
    QLabel *nearest_level;
    QSlider *nearest_horizontalSlider;
    QPushButton *nearest_spin_push;
    QPushButton *bilinear_spin_push;
    mywidget *original_page;
    mywidget *original_page_2;
    QWidget *sampling_rate;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLineEdit *width;
    QLabel *mult;
    QLineEdit *length;
    QPushButton *sampling;
    QCustomPlot *sampling_paint;
    mywidget *sampling_page;
    QWidget *gray;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *gray_level;
    QPushButton *gray_determine;
    QCustomPlot *gray_paint;
    mywidget *gray_page;
    QWidget *bitplane;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *bit1;
    QLabel *bit2;
    QLabel *bit3;
    QLabel *bit4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *bit5;
    QLabel *bit6;
    QLabel *bit7;
    QLabel *bit8;
    QPushButton *bitplane_save;
    QWidget *histogram;
    QTabWidget *gray_hist;
    QWidget *gray_count;
    QTableWidget *histogram_info;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *threshold;
    QPushButton *threshold_update;
    QCustomPlot *histogram_paint;
    mywidget *histogram_page;
    QWidget *gray_balance;
    QCustomPlot *gray_bal_paint;
    mywidget *gray_bal_image;
    QWidget *point;
    QTabWidget *point_type;
    QWidget *line_trans;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_12;
    QLabel *line_f1;
    QLineEdit *line_a1;
    QLabel *line_d1;
    QLineEdit *line_b1;
    QPushButton *line_push;
    QCustomPlot *line_ori_paint;
    QCustomPlot *line_trans_paint;
    mywidget *line_ori_image;
    mywidget *line_trans_image;
    QWidget *nline_trans1;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_17;
    QLabel *nline_f1;
    QLineEdit *nline_c1;
    QLabel *nline_d1;
    QPushButton *nline_push1;
    QCustomPlot *nline_trans1_paint;
    QCustomPlot *nline_ori1_paint;
    mywidget *nline_ori1_image;
    mywidget *nline_trans1_image;
    QWidget *nline_trans2;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_21;
    QHBoxLayout *horizontalLayout_22;
    QLabel *nline_f2;
    QLineEdit *nline_a2;
    QLabel *nline_d2;
    QLineEdit *nline_b2;
    QPushButton *nline_push2;
    QCustomPlot *nline_ori2_paint;
    QCustomPlot *nline_trans2_paint;
    mywidget *nline_ori2_image;
    mywidget *nline_trans2_image;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1189, 840);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        openFile = new QAction(MainWindow);
        openFile->setObjectName(QStringLiteral("openFile"));
        openFile->setCheckable(false);
        openFile->setChecked(false);
        saveFIle = new QAction(MainWindow);
        saveFIle->setObjectName(QStringLiteral("saveFIle"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 1161, 791));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setIconSize(QSize(18, 18));
        original = new QWidget();
        original->setObjectName(QStringLiteral("original"));
        nearest_insert = new QLabel(original);
        nearest_insert->setObjectName(QStringLiteral("nearest_insert"));
        nearest_insert->setGeometry(QRect(210, 570, 161, 31));
        QFont font;
        font.setPointSize(12);
        nearest_insert->setFont(font);
        bilinear_insert = new QLabel(original);
        bilinear_insert->setObjectName(QStringLiteral("bilinear_insert"));
        bilinear_insert->setGeometry(QRect(750, 570, 161, 31));
        bilinear_insert->setFont(font);
        layoutWidget_3 = new QWidget(original);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(630, 620, 341, 61));
        horizontalLayout_26 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(0, 0, 0, 0);
        bilinear_level = new QLabel(layoutWidget_3);
        bilinear_level->setObjectName(QStringLiteral("bilinear_level"));
        bilinear_level->setFont(font);

        horizontalLayout_26->addWidget(bilinear_level);

        bilinear_horizontalSlider = new QSlider(layoutWidget_3);
        bilinear_horizontalSlider->setObjectName(QStringLiteral("bilinear_horizontalSlider"));
        bilinear_horizontalSlider->setMinimum(-10);
        bilinear_horizontalSlider->setMaximum(10);
        bilinear_horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_26->addWidget(bilinear_horizontalSlider);

        layoutWidget = new QWidget(original);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 620, 341, 61));
        horizontalLayout_25 = new QHBoxLayout(layoutWidget);
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        horizontalLayout_25->setContentsMargins(0, 0, 0, 0);
        nearest_level = new QLabel(layoutWidget);
        nearest_level->setObjectName(QStringLiteral("nearest_level"));
        nearest_level->setFont(font);

        horizontalLayout_25->addWidget(nearest_level);

        nearest_horizontalSlider = new QSlider(layoutWidget);
        nearest_horizontalSlider->setObjectName(QStringLiteral("nearest_horizontalSlider"));
        nearest_horizontalSlider->setMinimum(-10);
        nearest_horizontalSlider->setMaximum(10);
        nearest_horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_25->addWidget(nearest_horizontalSlider);

        nearest_spin_push = new QPushButton(original);
        nearest_spin_push->setObjectName(QStringLiteral("nearest_spin_push"));
        nearest_spin_push->setGeometry(QRect(190, 700, 121, 51));
        QFont font1;
        font1.setPointSize(18);
        nearest_spin_push->setFont(font1);
        bilinear_spin_push = new QPushButton(original);
        bilinear_spin_push->setObjectName(QStringLiteral("bilinear_spin_push"));
        bilinear_spin_push->setGeometry(QRect(760, 700, 121, 51));
        bilinear_spin_push->setFont(font1);
        original_page = new mywidget(original);
        original_page->setObjectName(QStringLiteral("original_page"));
        original_page->setGeometry(QRect(20, 10, 521, 541));
        original_page->setContextMenuPolicy(Qt::ActionsContextMenu);
        original_page_2 = new mywidget(original);
        original_page_2->setObjectName(QStringLiteral("original_page_2"));
        original_page_2->setGeometry(QRect(559, 9, 541, 541));
        original_page_2->setContextMenuPolicy(Qt::ActionsContextMenu);
        tabWidget->addTab(original, QString());
        sampling_rate = new QWidget();
        sampling_rate->setObjectName(QStringLiteral("sampling_rate"));
        layoutWidget1 = new QWidget(sampling_rate);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, 20, 211, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        width = new QLineEdit(layoutWidget1);
        width->setObjectName(QStringLiteral("width"));
        sizePolicy.setHeightForWidth(width->sizePolicy().hasHeightForWidth());
        width->setSizePolicy(sizePolicy);
        width->setMaxLength(3);

        horizontalLayout->addWidget(width);

        mult = new QLabel(layoutWidget1);
        mult->setObjectName(QStringLiteral("mult"));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(false);
        font2.setWeight(50);
        mult->setFont(font2);

        horizontalLayout->addWidget(mult);

        length = new QLineEdit(layoutWidget1);
        length->setObjectName(QStringLiteral("length"));
        sizePolicy.setHeightForWidth(length->sizePolicy().hasHeightForWidth());
        length->setSizePolicy(sizePolicy);
        length->setMaxLength(3);

        horizontalLayout->addWidget(length);

        sampling = new QPushButton(layoutWidget1);
        sampling->setObjectName(QStringLiteral("sampling"));

        horizontalLayout->addWidget(sampling);

        sampling_paint = new QCustomPlot(sampling_rate);
        sampling_paint->setObjectName(QStringLiteral("sampling_paint"));
        sampling_paint->setGeometry(QRect(549, 71, 501, 691));
        sampling_paint->setContextMenuPolicy(Qt::ActionsContextMenu);
        sampling_page = new mywidget(sampling_rate);
        sampling_page->setObjectName(QStringLiteral("sampling_page"));
        sampling_page->setGeometry(QRect(29, 70, 511, 691));
        sampling_page->setContextMenuPolicy(Qt::ActionsContextMenu);
        tabWidget->addTab(sampling_rate, QString());
        gray = new QWidget();
        gray->setObjectName(QStringLiteral("gray"));
        layoutWidget2 = new QWidget(gray);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(50, 20, 196, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        gray_level = new QLineEdit(layoutWidget2);
        gray_level->setObjectName(QStringLiteral("gray_level"));
        gray_level->setMaxLength(3);

        horizontalLayout_2->addWidget(gray_level);

        gray_determine = new QPushButton(layoutWidget2);
        gray_determine->setObjectName(QStringLiteral("gray_determine"));

        horizontalLayout_2->addWidget(gray_determine);

        gray_paint = new QCustomPlot(gray);
        gray_paint->setObjectName(QStringLiteral("gray_paint"));
        gray_paint->setGeometry(QRect(549, 61, 501, 711));
        gray_paint->setContextMenuPolicy(Qt::ActionsContextMenu);
        gray_page = new mywidget(gray);
        gray_page->setObjectName(QStringLiteral("gray_page"));
        gray_page->setGeometry(QRect(29, 60, 511, 711));
        gray_page->setContextMenuPolicy(Qt::ActionsContextMenu);
        tabWidget->addTab(gray, QString());
        bitplane = new QWidget();
        bitplane->setObjectName(QStringLiteral("bitplane"));
        layoutWidget_2 = new QWidget(bitplane);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 60, 1061, 691));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        bit1 = new QLabel(layoutWidget_2);
        bit1->setObjectName(QStringLiteral("bit1"));

        horizontalLayout_3->addWidget(bit1);

        bit2 = new QLabel(layoutWidget_2);
        bit2->setObjectName(QStringLiteral("bit2"));

        horizontalLayout_3->addWidget(bit2);

        bit3 = new QLabel(layoutWidget_2);
        bit3->setObjectName(QStringLiteral("bit3"));

        horizontalLayout_3->addWidget(bit3);

        bit4 = new QLabel(layoutWidget_2);
        bit4->setObjectName(QStringLiteral("bit4"));

        horizontalLayout_3->addWidget(bit4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        bit5 = new QLabel(layoutWidget_2);
        bit5->setObjectName(QStringLiteral("bit5"));

        horizontalLayout_4->addWidget(bit5);

        bit6 = new QLabel(layoutWidget_2);
        bit6->setObjectName(QStringLiteral("bit6"));

        horizontalLayout_4->addWidget(bit6);

        bit7 = new QLabel(layoutWidget_2);
        bit7->setObjectName(QStringLiteral("bit7"));

        horizontalLayout_4->addWidget(bit7);

        bit8 = new QLabel(layoutWidget_2);
        bit8->setObjectName(QStringLiteral("bit8"));

        horizontalLayout_4->addWidget(bit8);


        verticalLayout->addLayout(horizontalLayout_4);

        bitplane_save = new QPushButton(bitplane);
        bitplane_save->setObjectName(QStringLiteral("bitplane_save"));
        bitplane_save->setGeometry(QRect(440, 10, 101, 31));
        bitplane_save->setFont(font1);
        tabWidget->addTab(bitplane, QString());
        histogram = new QWidget();
        histogram->setObjectName(QStringLiteral("histogram"));
        gray_hist = new QTabWidget(histogram);
        gray_hist->setObjectName(QStringLiteral("gray_hist"));
        gray_hist->setGeometry(QRect(20, 10, 1061, 741));
        gray_count = new QWidget();
        gray_count->setObjectName(QStringLiteral("gray_count"));
        histogram_info = new QTableWidget(gray_count);
        if (histogram_info->columnCount() < 4)
            histogram_info->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        histogram_info->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        histogram_info->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        histogram_info->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        histogram_info->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (histogram_info->rowCount() < 1)
            histogram_info->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        histogram_info->setVerticalHeaderItem(0, __qtablewidgetitem4);
        histogram_info->setObjectName(QStringLiteral("histogram_info"));
        histogram_info->setGeometry(QRect(540, 10, 411, 51));
        layoutWidget_8 = new QWidget(gray_count);
        layoutWidget_8->setObjectName(QStringLiteral("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(90, 20, 236, 30));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(layoutWidget_8);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout_6->addWidget(label);

        threshold = new QLineEdit(layoutWidget_8);
        threshold->setObjectName(QStringLiteral("threshold"));

        horizontalLayout_6->addWidget(threshold);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        threshold_update = new QPushButton(layoutWidget_8);
        threshold_update->setObjectName(QStringLiteral("threshold_update"));

        horizontalLayout_7->addWidget(threshold_update);

        histogram_paint = new QCustomPlot(gray_count);
        histogram_paint->setObjectName(QStringLiteral("histogram_paint"));
        histogram_paint->setGeometry(QRect(519, 81, 491, 619));
        histogram_page = new mywidget(gray_count);
        histogram_page->setObjectName(QStringLiteral("histogram_page"));
        histogram_page->setGeometry(QRect(29, 80, 481, 621));
        histogram_page->setContextMenuPolicy(Qt::ActionsContextMenu);
        gray_hist->addTab(gray_count, QString());
        gray_balance = new QWidget();
        gray_balance->setObjectName(QStringLiteral("gray_balance"));
        gray_bal_paint = new QCustomPlot(gray_balance);
        gray_bal_paint->setObjectName(QStringLiteral("gray_bal_paint"));
        gray_bal_paint->setGeometry(QRect(534, 21, 496, 659));
        gray_bal_image = new mywidget(gray_balance);
        gray_bal_image->setObjectName(QStringLiteral("gray_bal_image"));
        gray_bal_image->setGeometry(QRect(19, 20, 501, 661));
        gray_bal_image->setContextMenuPolicy(Qt::ActionsContextMenu);
        gray_hist->addTab(gray_balance, QString());
        tabWidget->addTab(histogram, QString());
        point = new QWidget();
        point->setObjectName(QStringLiteral("point"));
        point_type = new QTabWidget(point);
        point_type->setObjectName(QStringLiteral("point_type"));
        point_type->setGeometry(QRect(20, 10, 1061, 751));
        line_trans = new QWidget();
        line_trans->setObjectName(QStringLiteral("line_trans"));
        layoutWidget3 = new QWidget(line_trans);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(350, 360, 301, 41));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        line_f1 = new QLabel(layoutWidget3);
        line_f1->setObjectName(QStringLiteral("line_f1"));
        QFont font3;
        font3.setPointSize(14);
        line_f1->setFont(font3);

        horizontalLayout_12->addWidget(line_f1);

        line_a1 = new QLineEdit(layoutWidget3);
        line_a1->setObjectName(QStringLiteral("line_a1"));
        line_a1->setMaxLength(5);

        horizontalLayout_12->addWidget(line_a1);

        line_d1 = new QLabel(layoutWidget3);
        line_d1->setObjectName(QStringLiteral("line_d1"));
        line_d1->setEnabled(true);
        line_d1->setFont(font3);

        horizontalLayout_12->addWidget(line_d1);

        line_b1 = new QLineEdit(layoutWidget3);
        line_b1->setObjectName(QStringLiteral("line_b1"));
        line_b1->setMaxLength(5);

        horizontalLayout_12->addWidget(line_b1);


        horizontalLayout_13->addLayout(horizontalLayout_12);

        line_push = new QPushButton(layoutWidget3);
        line_push->setObjectName(QStringLiteral("line_push"));

        horizontalLayout_13->addWidget(line_push);

        line_ori_paint = new QCustomPlot(line_trans);
        line_ori_paint->setObjectName(QStringLiteral("line_ori_paint"));
        line_ori_paint->setGeometry(QRect(529, 21, 491, 339));
        line_trans_paint = new QCustomPlot(line_trans);
        line_trans_paint->setObjectName(QStringLiteral("line_trans_paint"));
        line_trans_paint->setGeometry(QRect(529, 401, 491, 311));
        line_ori_image = new mywidget(line_trans);
        line_ori_image->setObjectName(QStringLiteral("line_ori_image"));
        line_ori_image->setGeometry(QRect(29, 20, 491, 341));
        line_ori_image->setContextMenuPolicy(Qt::ActionsContextMenu);
        line_trans_image = new mywidget(line_trans);
        line_trans_image->setObjectName(QStringLiteral("line_trans_image"));
        line_trans_image->setGeometry(QRect(29, 400, 491, 311));
        line_trans_image->setContextMenuPolicy(Qt::ActionsContextMenu);
        point_type->addTab(line_trans, QString());
        nline_trans1 = new QWidget();
        nline_trans1->setObjectName(QStringLiteral("nline_trans1"));
        layoutWidget4 = new QWidget(nline_trans1);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(360, 350, 294, 41));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        nline_f1 = new QLabel(layoutWidget4);
        nline_f1->setObjectName(QStringLiteral("nline_f1"));
        nline_f1->setFont(font3);

        horizontalLayout_17->addWidget(nline_f1);

        nline_c1 = new QLineEdit(layoutWidget4);
        nline_c1->setObjectName(QStringLiteral("nline_c1"));
        nline_c1->setMaxLength(4);

        horizontalLayout_17->addWidget(nline_c1);

        nline_d1 = new QLabel(layoutWidget4);
        nline_d1->setObjectName(QStringLiteral("nline_d1"));
        nline_d1->setFont(font3);

        horizontalLayout_17->addWidget(nline_d1);

        nline_push1 = new QPushButton(layoutWidget4);
        nline_push1->setObjectName(QStringLiteral("nline_push1"));

        horizontalLayout_17->addWidget(nline_push1);

        nline_trans1_paint = new QCustomPlot(nline_trans1);
        nline_trans1_paint->setObjectName(QStringLiteral("nline_trans1_paint"));
        nline_trans1_paint->setGeometry(QRect(530, 390, 491, 321));
        nline_ori1_paint = new QCustomPlot(nline_trans1);
        nline_ori1_paint->setObjectName(QStringLiteral("nline_ori1_paint"));
        nline_ori1_paint->setGeometry(QRect(529, 21, 491, 331));
        nline_ori1_image = new mywidget(nline_trans1);
        nline_ori1_image->setObjectName(QStringLiteral("nline_ori1_image"));
        nline_ori1_image->setGeometry(QRect(29, 20, 491, 331));
        nline_ori1_image->setContextMenuPolicy(Qt::ActionsContextMenu);
        nline_trans1_image = new mywidget(nline_trans1);
        nline_trans1_image->setObjectName(QStringLiteral("nline_trans1_image"));
        nline_trans1_image->setGeometry(QRect(29, 390, 491, 321));
        nline_trans1_image->setContextMenuPolicy(Qt::ActionsContextMenu);
        point_type->addTab(nline_trans1, QString());
        nline_trans2 = new QWidget();
        nline_trans2->setObjectName(QStringLiteral("nline_trans2"));
        layoutWidget_7 = new QWidget(nline_trans2);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(330, 360, 301, 41));
        horizontalLayout_21 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        nline_f2 = new QLabel(layoutWidget_7);
        nline_f2->setObjectName(QStringLiteral("nline_f2"));
        nline_f2->setFont(font3);

        horizontalLayout_22->addWidget(nline_f2);

        nline_a2 = new QLineEdit(layoutWidget_7);
        nline_a2->setObjectName(QStringLiteral("nline_a2"));
        nline_a2->setMaxLength(5);

        horizontalLayout_22->addWidget(nline_a2);

        nline_d2 = new QLabel(layoutWidget_7);
        nline_d2->setObjectName(QStringLiteral("nline_d2"));
        nline_d2->setEnabled(true);
        nline_d2->setFont(font3);

        horizontalLayout_22->addWidget(nline_d2);

        nline_b2 = new QLineEdit(layoutWidget_7);
        nline_b2->setObjectName(QStringLiteral("nline_b2"));
        nline_b2->setMaxLength(5);

        horizontalLayout_22->addWidget(nline_b2);


        horizontalLayout_21->addLayout(horizontalLayout_22);

        nline_push2 = new QPushButton(layoutWidget_7);
        nline_push2->setObjectName(QStringLiteral("nline_push2"));

        horizontalLayout_21->addWidget(nline_push2);

        nline_ori2_paint = new QCustomPlot(nline_trans2);
        nline_ori2_paint->setObjectName(QStringLiteral("nline_ori2_paint"));
        nline_ori2_paint->setGeometry(QRect(539, 21, 481, 339));
        nline_trans2_paint = new QCustomPlot(nline_trans2);
        nline_trans2_paint->setObjectName(QStringLiteral("nline_trans2_paint"));
        nline_trans2_paint->setGeometry(QRect(540, 400, 481, 301));
        nline_ori2_image = new mywidget(nline_trans2);
        nline_ori2_image->setObjectName(QStringLiteral("nline_ori2_image"));
        nline_ori2_image->setGeometry(QRect(29, 20, 501, 341));
        nline_ori2_image->setContextMenuPolicy(Qt::ActionsContextMenu);
        nline_trans2_image = new mywidget(nline_trans2);
        nline_trans2_image->setObjectName(QStringLiteral("nline_trans2_image"));
        nline_trans2_image->setGeometry(QRect(29, 400, 501, 301));
        nline_trans2_image->setContextMenuPolicy(Qt::ActionsContextMenu);
        point_type->addTab(nline_trans2, QString());
        tabWidget->addTab(point, QString());
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        gray_hist->setCurrentIndex(0);
        point_type->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        openFile->setText(QApplication::translate("MainWindow", "open", nullptr));
        saveFIle->setText(QApplication::translate("MainWindow", "save", nullptr));
        nearest_insert->setText(QApplication::translate("MainWindow", "\346\234\200\350\277\221\351\202\273\346\217\222\345\200\274\347\256\227\346\263\225", nullptr));
        bilinear_insert->setText(QApplication::translate("MainWindow", "\345\217\214\347\272\277\346\200\247\346\217\222\345\200\274\347\256\227\346\263\225", nullptr));
        bilinear_level->setText(QApplication::translate("MainWindow", "\347\274\251\346\224\276\345\200\215\346\225\260: 0    ", nullptr));
        nearest_level->setText(QApplication::translate("MainWindow", "\347\274\251\346\224\276\345\200\215\346\225\260: 0    ", nullptr));
        nearest_spin_push->setText(QApplication::translate("MainWindow", "\346\227\213\350\275\254", nullptr));
        bilinear_spin_push->setText(QApplication::translate("MainWindow", "\346\227\213\350\275\254", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(original), QApplication::translate("MainWindow", "\345\233\276\345\203\217\346\224\276\347\274\251", nullptr));
        width->setInputMask(QString());
        width->setPlaceholderText(QString());
        mult->setText(QApplication::translate("MainWindow", "*", nullptr));
        sampling->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(sampling_rate), QApplication::translate("MainWindow", "\351\207\207\346\240\267\347\216\207", nullptr));
        gray_determine->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(gray), QApplication::translate("MainWindow", "\347\201\260\345\272\246\347\272\247", nullptr));
        bit1->setText(QString());
        bit2->setText(QString());
        bit3->setText(QString());
        bit4->setText(QString());
        bit5->setText(QString());
        bit6->setText(QString());
        bit7->setText(QString());
        bit8->setText(QString());
#ifndef QT_NO_STATUSTIP
        bitplane_save->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        bitplane_save->setText(QApplication::translate("MainWindow", "saveAll", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(bitplane), QApplication::translate("MainWindow", "\344\275\215\345\271\263\351\235\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem = histogram_info->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\345\203\217\347\264\240\346\200\273\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = histogram_info->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\345\271\263\345\235\207\347\201\260\345\272\246", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = histogram_info->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\344\270\255\345\200\274\347\201\260\345\272\246", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = histogram_info->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\346\240\207\345\207\206\345\267\256", nullptr));
        label->setText(QApplication::translate("MainWindow", "\351\230\200\345\200\274", nullptr));
        threshold_update->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        gray_hist->setTabText(gray_hist->indexOf(gray_count), QApplication::translate("MainWindow", "\347\201\260\345\272\246\345\200\274\347\273\237\350\256\241", nullptr));
        gray_hist->setTabText(gray_hist->indexOf(gray_balance), QApplication::translate("MainWindow", "\347\201\260\345\272\246\347\233\264\346\226\271\345\233\276\345\235\207\350\241\241\345\214\226", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(histogram), QApplication::translate("MainWindow", "\347\201\260\345\272\246\347\233\264\346\226\271\345\233\276", nullptr));
        line_f1->setText(QApplication::translate("MainWindow", "f(D) = ", nullptr));
        line_d1->setText(QApplication::translate("MainWindow", "*D + ", nullptr));
        line_push->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        point_type->setTabText(point_type->indexOf(line_trans), QApplication::translate("MainWindow", "\347\272\277\346\200\247\345\217\230\346\215\242", nullptr));
        nline_f1->setText(QApplication::translate("MainWindow", "f(D) = ", nullptr));
        nline_c1->setPlaceholderText(QApplication::translate("MainWindow", "c", nullptr));
        nline_d1->setText(QApplication::translate("MainWindow", "*log(D+1)", nullptr));
        nline_push1->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        point_type->setTabText(point_type->indexOf(nline_trans1), QApplication::translate("MainWindow", "\351\235\236\347\272\277\346\200\247\345\217\230\346\215\2421", nullptr));
        nline_f2->setText(QApplication::translate("MainWindow", "f(D) = ", nullptr));
        nline_a2->setPlaceholderText(QApplication::translate("MainWindow", "a", nullptr));
        nline_d2->setText(QApplication::translate("MainWindow", "D^", nullptr));
        nline_b2->setPlaceholderText(QApplication::translate("MainWindow", "b", nullptr));
        nline_push2->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        point_type->setTabText(point_type->indexOf(nline_trans2), QApplication::translate("MainWindow", "\351\235\236\347\272\277\346\200\247\345\217\230\346\215\2422", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(point), QApplication::translate("MainWindow", "\347\202\271\350\277\220\347\256\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
