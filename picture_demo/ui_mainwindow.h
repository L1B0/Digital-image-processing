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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_20;
    QScrollArea *ori_scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout_14;
    QLabel *original_page;
    QScrollArea *ori_scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QLabel *original_page_2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_26;
    QLabel *bilinear_level;
    QSlider *bilinear_horizontalSlider;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_25;
    QLabel *nearest_level;
    QSlider *nearest_horizontalSlider;
    QWidget *sampling_rate;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *width;
    QLabel *mult;
    QLineEdit *length;
    QPushButton *sampling;
    QScrollArea *sampling_scrollArea;
    QWidget *scrollAreaWidgetContents_13;
    QHBoxLayout *horizontalLayout_8;
    QLabel *sampling_page;
    QCustomPlot *sampling_paint;
    QWidget *gray;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *gray_level;
    QPushButton *gray_determine;
    QScrollArea *gray_scrollArea;
    QWidget *scrollAreaWidgetContents_12;
    QHBoxLayout *horizontalLayout_9;
    QLabel *gray_page;
    QCustomPlot *gray_paint;
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
    QScrollArea *histogram_scrollArea;
    QWidget *scrollAreaWidgetContents_11;
    QHBoxLayout *horizontalLayout_5;
    QLabel *histogram_page;
    QCustomPlot *histogram_paint;
    QWidget *gray_balance;
    QScrollArea *gray_bal_scrollArea;
    QWidget *scrollAreaWidgetContents_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *gray_bal_image;
    QCustomPlot *gray_bal_paint;
    QWidget *point;
    QTabWidget *point_type;
    QWidget *line_trans;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_12;
    QLabel *line_f1;
    QLineEdit *line_a1;
    QLabel *line_d1;
    QLineEdit *line_b1;
    QPushButton *line_push;
    QScrollArea *line_ori_scrollArea;
    QWidget *scrollAreaWidgetContents_8;
    QHBoxLayout *horizontalLayout_10;
    QLabel *line_ori_image;
    QScrollArea *line_trans_scrollArea;
    QWidget *scrollAreaWidgetContents_9;
    QHBoxLayout *horizontalLayout_19;
    QLabel *line_trans_image;
    QCustomPlot *line_ori_paint;
    QCustomPlot *line_trans_paint;
    QWidget *nline_trans1;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_17;
    QLabel *nline_f1;
    QLineEdit *nline_c1;
    QLabel *nline_d1;
    QPushButton *nline_push1;
    QScrollArea *nline_ori1_scrollArea;
    QWidget *scrollAreaWidgetContents_5;
    QHBoxLayout *horizontalLayout_15;
    QLabel *nline_ori1_image;
    QCustomPlot *nline_trans1_paint;
    QScrollArea *nline_trans1_scrollArea;
    QWidget *scrollAreaWidgetContents_7;
    QHBoxLayout *horizontalLayout_24;
    QLabel *nline_trans1_image;
    QCustomPlot *nline_ori1_paint;
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
    QScrollArea *nline_ori2_scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_18;
    QLabel *nline_ori2_image;
    QScrollArea *nline_trans2_scrollArea;
    QWidget *scrollAreaWidgetContents_4;
    QHBoxLayout *horizontalLayout_16;
    QLabel *nline_trans2_image;
    QCustomPlot *nline_trans2_paint;
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
        tabWidget->setGeometry(QRect(10, 10, 1141, 791));
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
        layoutWidget = new QWidget(original);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 1051, 541));
        horizontalLayout_20 = new QHBoxLayout(layoutWidget);
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        ori_scrollArea = new QScrollArea(layoutWidget);
        ori_scrollArea->setObjectName(QStringLiteral("ori_scrollArea"));
        ori_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 520, 537));
        horizontalLayout_14 = new QHBoxLayout(scrollAreaWidgetContents_2);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        original_page = new QLabel(scrollAreaWidgetContents_2);
        original_page->setObjectName(QStringLiteral("original_page"));

        horizontalLayout_14->addWidget(original_page);

        ori_scrollArea->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout_20->addWidget(ori_scrollArea);

        ori_scrollArea_2 = new QScrollArea(layoutWidget);
        ori_scrollArea_2->setObjectName(QStringLiteral("ori_scrollArea_2"));
        ori_scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 519, 537));
        original_page_2 = new QLabel(scrollAreaWidgetContents_3);
        original_page_2->setObjectName(QStringLiteral("original_page_2"));
        original_page_2->setGeometry(QRect(20, 20, 471, 501));
        ori_scrollArea_2->setWidget(scrollAreaWidgetContents_3);

        horizontalLayout_20->addWidget(ori_scrollArea_2);

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

        layoutWidget1 = new QWidget(original);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(90, 620, 341, 61));
        horizontalLayout_25 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        horizontalLayout_25->setContentsMargins(0, 0, 0, 0);
        nearest_level = new QLabel(layoutWidget1);
        nearest_level->setObjectName(QStringLiteral("nearest_level"));
        nearest_level->setFont(font);

        horizontalLayout_25->addWidget(nearest_level);

        nearest_horizontalSlider = new QSlider(layoutWidget1);
        nearest_horizontalSlider->setObjectName(QStringLiteral("nearest_horizontalSlider"));
        nearest_horizontalSlider->setMinimum(-10);
        nearest_horizontalSlider->setMaximum(10);
        nearest_horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_25->addWidget(nearest_horizontalSlider);

        tabWidget->addTab(original, QString());
        sampling_rate = new QWidget();
        sampling_rate->setObjectName(QStringLiteral("sampling_rate"));
        layoutWidget2 = new QWidget(sampling_rate);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(60, 20, 211, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        width = new QLineEdit(layoutWidget2);
        width->setObjectName(QStringLiteral("width"));
        sizePolicy.setHeightForWidth(width->sizePolicy().hasHeightForWidth());
        width->setSizePolicy(sizePolicy);
        width->setMaxLength(3);

        horizontalLayout->addWidget(width);

        mult = new QLabel(layoutWidget2);
        mult->setObjectName(QStringLiteral("mult"));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setWeight(50);
        mult->setFont(font1);

        horizontalLayout->addWidget(mult);

        length = new QLineEdit(layoutWidget2);
        length->setObjectName(QStringLiteral("length"));
        sizePolicy.setHeightForWidth(length->sizePolicy().hasHeightForWidth());
        length->setSizePolicy(sizePolicy);
        length->setMaxLength(3);

        horizontalLayout->addWidget(length);

        sampling = new QPushButton(layoutWidget2);
        sampling->setObjectName(QStringLiteral("sampling"));

        horizontalLayout->addWidget(sampling);

        sampling_scrollArea = new QScrollArea(sampling_rate);
        sampling_scrollArea->setObjectName(QStringLiteral("sampling_scrollArea"));
        sampling_scrollArea->setGeometry(QRect(30, 70, 511, 691));
        sampling_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_13 = new QWidget();
        scrollAreaWidgetContents_13->setObjectName(QStringLiteral("scrollAreaWidgetContents_13"));
        scrollAreaWidgetContents_13->setGeometry(QRect(0, 0, 509, 689));
        horizontalLayout_8 = new QHBoxLayout(scrollAreaWidgetContents_13);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        sampling_page = new QLabel(scrollAreaWidgetContents_13);
        sampling_page->setObjectName(QStringLiteral("sampling_page"));

        horizontalLayout_8->addWidget(sampling_page);

        sampling_scrollArea->setWidget(scrollAreaWidgetContents_13);
        sampling_paint = new QCustomPlot(sampling_rate);
        sampling_paint->setObjectName(QStringLiteral("sampling_paint"));
        sampling_paint->setGeometry(QRect(549, 71, 501, 691));
        tabWidget->addTab(sampling_rate, QString());
        gray = new QWidget();
        gray->setObjectName(QStringLiteral("gray"));
        layoutWidget3 = new QWidget(gray);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(50, 20, 196, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        gray_level = new QLineEdit(layoutWidget3);
        gray_level->setObjectName(QStringLiteral("gray_level"));
        gray_level->setMaxLength(3);

        horizontalLayout_2->addWidget(gray_level);

        gray_determine = new QPushButton(layoutWidget3);
        gray_determine->setObjectName(QStringLiteral("gray_determine"));

        horizontalLayout_2->addWidget(gray_determine);

        gray_scrollArea = new QScrollArea(gray);
        gray_scrollArea->setObjectName(QStringLiteral("gray_scrollArea"));
        gray_scrollArea->setGeometry(QRect(30, 60, 511, 711));
        gray_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_12 = new QWidget();
        scrollAreaWidgetContents_12->setObjectName(QStringLiteral("scrollAreaWidgetContents_12"));
        scrollAreaWidgetContents_12->setGeometry(QRect(0, 0, 509, 709));
        horizontalLayout_9 = new QHBoxLayout(scrollAreaWidgetContents_12);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        gray_page = new QLabel(scrollAreaWidgetContents_12);
        gray_page->setObjectName(QStringLiteral("gray_page"));

        horizontalLayout_9->addWidget(gray_page);

        gray_scrollArea->setWidget(scrollAreaWidgetContents_12);
        gray_paint = new QCustomPlot(gray);
        gray_paint->setObjectName(QStringLiteral("gray_paint"));
        gray_paint->setGeometry(QRect(549, 61, 501, 711));
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
        QFont font2;
        font2.setPointSize(18);
        bitplane_save->setFont(font2);
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

        histogram_scrollArea = new QScrollArea(gray_count);
        histogram_scrollArea->setObjectName(QStringLiteral("histogram_scrollArea"));
        histogram_scrollArea->setGeometry(QRect(20, 80, 491, 621));
        histogram_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_11 = new QWidget();
        scrollAreaWidgetContents_11->setObjectName(QStringLiteral("scrollAreaWidgetContents_11"));
        scrollAreaWidgetContents_11->setGeometry(QRect(0, 0, 489, 619));
        horizontalLayout_5 = new QHBoxLayout(scrollAreaWidgetContents_11);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        histogram_page = new QLabel(scrollAreaWidgetContents_11);
        histogram_page->setObjectName(QStringLiteral("histogram_page"));

        horizontalLayout_5->addWidget(histogram_page);

        histogram_scrollArea->setWidget(scrollAreaWidgetContents_11);
        histogram_paint = new QCustomPlot(gray_count);
        histogram_paint->setObjectName(QStringLiteral("histogram_paint"));
        histogram_paint->setGeometry(QRect(519, 81, 491, 619));
        gray_hist->addTab(gray_count, QString());
        gray_balance = new QWidget();
        gray_balance->setObjectName(QStringLiteral("gray_balance"));
        gray_bal_scrollArea = new QScrollArea(gray_balance);
        gray_bal_scrollArea->setObjectName(QStringLiteral("gray_bal_scrollArea"));
        gray_bal_scrollArea->setGeometry(QRect(25, 17, 491, 661));
        gray_bal_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_10 = new QWidget();
        scrollAreaWidgetContents_10->setObjectName(QStringLiteral("scrollAreaWidgetContents_10"));
        scrollAreaWidgetContents_10->setGeometry(QRect(0, 0, 489, 659));
        horizontalLayout_11 = new QHBoxLayout(scrollAreaWidgetContents_10);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        gray_bal_image = new QLabel(scrollAreaWidgetContents_10);
        gray_bal_image->setObjectName(QStringLiteral("gray_bal_image"));

        horizontalLayout_11->addWidget(gray_bal_image);

        gray_bal_scrollArea->setWidget(scrollAreaWidgetContents_10);
        gray_bal_paint = new QCustomPlot(gray_balance);
        gray_bal_paint->setObjectName(QStringLiteral("gray_bal_paint"));
        gray_bal_paint->setGeometry(QRect(534, 21, 496, 659));
        gray_hist->addTab(gray_balance, QString());
        tabWidget->addTab(histogram, QString());
        point = new QWidget();
        point->setObjectName(QStringLiteral("point"));
        point_type = new QTabWidget(point);
        point_type->setObjectName(QStringLiteral("point_type"));
        point_type->setGeometry(QRect(20, 10, 1061, 751));
        line_trans = new QWidget();
        line_trans->setObjectName(QStringLiteral("line_trans"));
        layoutWidget4 = new QWidget(line_trans);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(350, 360, 301, 41));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        line_f1 = new QLabel(layoutWidget4);
        line_f1->setObjectName(QStringLiteral("line_f1"));
        QFont font3;
        font3.setPointSize(14);
        line_f1->setFont(font3);

        horizontalLayout_12->addWidget(line_f1);

        line_a1 = new QLineEdit(layoutWidget4);
        line_a1->setObjectName(QStringLiteral("line_a1"));
        line_a1->setMaxLength(5);

        horizontalLayout_12->addWidget(line_a1);

        line_d1 = new QLabel(layoutWidget4);
        line_d1->setObjectName(QStringLiteral("line_d1"));
        line_d1->setEnabled(true);
        line_d1->setFont(font3);

        horizontalLayout_12->addWidget(line_d1);

        line_b1 = new QLineEdit(layoutWidget4);
        line_b1->setObjectName(QStringLiteral("line_b1"));
        line_b1->setMaxLength(5);

        horizontalLayout_12->addWidget(line_b1);


        horizontalLayout_13->addLayout(horizontalLayout_12);

        line_push = new QPushButton(layoutWidget4);
        line_push->setObjectName(QStringLiteral("line_push"));

        horizontalLayout_13->addWidget(line_push);

        line_ori_scrollArea = new QScrollArea(line_trans);
        line_ori_scrollArea->setObjectName(QStringLiteral("line_ori_scrollArea"));
        line_ori_scrollArea->setGeometry(QRect(30, 20, 491, 341));
        line_ori_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_8 = new QWidget();
        scrollAreaWidgetContents_8->setObjectName(QStringLiteral("scrollAreaWidgetContents_8"));
        scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 489, 339));
        horizontalLayout_10 = new QHBoxLayout(scrollAreaWidgetContents_8);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        line_ori_image = new QLabel(scrollAreaWidgetContents_8);
        line_ori_image->setObjectName(QStringLiteral("line_ori_image"));
        line_ori_image->setScaledContents(false);

        horizontalLayout_10->addWidget(line_ori_image);

        line_ori_scrollArea->setWidget(scrollAreaWidgetContents_8);
        line_trans_scrollArea = new QScrollArea(line_trans);
        line_trans_scrollArea->setObjectName(QStringLiteral("line_trans_scrollArea"));
        line_trans_scrollArea->setGeometry(QRect(29, 399, 491, 311));
        line_trans_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_9 = new QWidget();
        scrollAreaWidgetContents_9->setObjectName(QStringLiteral("scrollAreaWidgetContents_9"));
        scrollAreaWidgetContents_9->setGeometry(QRect(0, 0, 489, 309));
        horizontalLayout_19 = new QHBoxLayout(scrollAreaWidgetContents_9);
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        line_trans_image = new QLabel(scrollAreaWidgetContents_9);
        line_trans_image->setObjectName(QStringLiteral("line_trans_image"));
        line_trans_image->setScaledContents(false);

        horizontalLayout_19->addWidget(line_trans_image);

        line_trans_scrollArea->setWidget(scrollAreaWidgetContents_9);
        line_ori_paint = new QCustomPlot(line_trans);
        line_ori_paint->setObjectName(QStringLiteral("line_ori_paint"));
        line_ori_paint->setGeometry(QRect(529, 21, 491, 339));
        line_trans_paint = new QCustomPlot(line_trans);
        line_trans_paint->setObjectName(QStringLiteral("line_trans_paint"));
        line_trans_paint->setGeometry(QRect(529, 401, 491, 311));
        point_type->addTab(line_trans, QString());
        nline_trans1 = new QWidget();
        nline_trans1->setObjectName(QStringLiteral("nline_trans1"));
        layoutWidget5 = new QWidget(nline_trans1);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(360, 350, 294, 41));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        nline_f1 = new QLabel(layoutWidget5);
        nline_f1->setObjectName(QStringLiteral("nline_f1"));
        nline_f1->setFont(font3);

        horizontalLayout_17->addWidget(nline_f1);

        nline_c1 = new QLineEdit(layoutWidget5);
        nline_c1->setObjectName(QStringLiteral("nline_c1"));
        nline_c1->setMaxLength(4);

        horizontalLayout_17->addWidget(nline_c1);

        nline_d1 = new QLabel(layoutWidget5);
        nline_d1->setObjectName(QStringLiteral("nline_d1"));
        nline_d1->setFont(font3);

        horizontalLayout_17->addWidget(nline_d1);

        nline_push1 = new QPushButton(layoutWidget5);
        nline_push1->setObjectName(QStringLiteral("nline_push1"));

        horizontalLayout_17->addWidget(nline_push1);

        nline_ori1_scrollArea = new QScrollArea(nline_trans1);
        nline_ori1_scrollArea->setObjectName(QStringLiteral("nline_ori1_scrollArea"));
        nline_ori1_scrollArea->setGeometry(QRect(30, 20, 491, 331));
        nline_ori1_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QStringLiteral("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 489, 329));
        horizontalLayout_15 = new QHBoxLayout(scrollAreaWidgetContents_5);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        nline_ori1_image = new QLabel(scrollAreaWidgetContents_5);
        nline_ori1_image->setObjectName(QStringLiteral("nline_ori1_image"));
        nline_ori1_image->setScaledContents(false);

        horizontalLayout_15->addWidget(nline_ori1_image);

        nline_ori1_scrollArea->setWidget(scrollAreaWidgetContents_5);
        nline_trans1_paint = new QCustomPlot(nline_trans1);
        nline_trans1_paint->setObjectName(QStringLiteral("nline_trans1_paint"));
        nline_trans1_paint->setGeometry(QRect(530, 390, 491, 321));
        nline_trans1_scrollArea = new QScrollArea(nline_trans1);
        nline_trans1_scrollArea->setObjectName(QStringLiteral("nline_trans1_scrollArea"));
        nline_trans1_scrollArea->setGeometry(QRect(30, 390, 491, 321));
        nline_trans1_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QStringLiteral("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 489, 319));
        horizontalLayout_24 = new QHBoxLayout(scrollAreaWidgetContents_7);
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        nline_trans1_image = new QLabel(scrollAreaWidgetContents_7);
        nline_trans1_image->setObjectName(QStringLiteral("nline_trans1_image"));
        nline_trans1_image->setScaledContents(false);

        horizontalLayout_24->addWidget(nline_trans1_image);

        nline_trans1_scrollArea->setWidget(scrollAreaWidgetContents_7);
        nline_ori1_paint = new QCustomPlot(nline_trans1);
        nline_ori1_paint->setObjectName(QStringLiteral("nline_ori1_paint"));
        nline_ori1_paint->setGeometry(QRect(529, 21, 491, 331));
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
        nline_ori2_scrollArea = new QScrollArea(nline_trans2);
        nline_ori2_scrollArea->setObjectName(QStringLiteral("nline_ori2_scrollArea"));
        nline_ori2_scrollArea->setGeometry(QRect(29, 19, 501, 341));
        nline_ori2_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 499, 339));
        horizontalLayout_18 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        nline_ori2_image = new QLabel(scrollAreaWidgetContents);
        nline_ori2_image->setObjectName(QStringLiteral("nline_ori2_image"));
        nline_ori2_image->setScaledContents(false);

        horizontalLayout_18->addWidget(nline_ori2_image);

        nline_ori2_scrollArea->setWidget(scrollAreaWidgetContents);
        nline_trans2_scrollArea = new QScrollArea(nline_trans2);
        nline_trans2_scrollArea->setObjectName(QStringLiteral("nline_trans2_scrollArea"));
        nline_trans2_scrollArea->setGeometry(QRect(28, 397, 501, 311));
        nline_trans2_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 499, 309));
        horizontalLayout_16 = new QHBoxLayout(scrollAreaWidgetContents_4);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        nline_trans2_image = new QLabel(scrollAreaWidgetContents_4);
        nline_trans2_image->setObjectName(QStringLiteral("nline_trans2_image"));
        nline_trans2_image->setScaledContents(false);

        horizontalLayout_16->addWidget(nline_trans2_image);

        nline_trans2_scrollArea->setWidget(scrollAreaWidgetContents_4);
        nline_trans2_paint = new QCustomPlot(nline_trans2);
        nline_trans2_paint->setObjectName(QStringLiteral("nline_trans2_paint"));
        nline_trans2_paint->setGeometry(QRect(540, 400, 481, 301));
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
        gray_hist->setCurrentIndex(1);
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
        original_page->setText(QApplication::translate("MainWindow", "1", nullptr));
        original_page_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        bilinear_level->setText(QApplication::translate("MainWindow", "\347\274\251\346\224\276\345\200\215\346\225\260: 0    ", nullptr));
        nearest_level->setText(QApplication::translate("MainWindow", "\347\274\251\346\224\276\345\200\215\346\225\260: 0    ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(original), QApplication::translate("MainWindow", "\345\216\237\345\233\276", nullptr));
        width->setInputMask(QString());
        width->setPlaceholderText(QString());
        mult->setText(QApplication::translate("MainWindow", "*", nullptr));
        sampling->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        sampling_page->setText(QApplication::translate("MainWindow", "sam", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(sampling_rate), QApplication::translate("MainWindow", "\351\207\207\346\240\267\347\216\207", nullptr));
        gray_determine->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        gray_page->setText(QApplication::translate("MainWindow", "gary", nullptr));
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
        histogram_page->setText(QApplication::translate("MainWindow", "hist", nullptr));
        gray_hist->setTabText(gray_hist->indexOf(gray_count), QApplication::translate("MainWindow", "\347\201\260\345\272\246\345\200\274\347\273\237\350\256\241", nullptr));
        gray_bal_image->setText(QApplication::translate("MainWindow", "gray_balance_image", nullptr));
        gray_hist->setTabText(gray_hist->indexOf(gray_balance), QApplication::translate("MainWindow", "\347\201\260\345\272\246\347\233\264\346\226\271\345\233\276\345\235\207\350\241\241\345\214\226", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(histogram), QApplication::translate("MainWindow", "\347\201\260\345\272\246\347\233\264\346\226\271\345\233\276", nullptr));
        line_f1->setText(QApplication::translate("MainWindow", "f(D) = ", nullptr));
        line_d1->setText(QApplication::translate("MainWindow", "*D + ", nullptr));
        line_push->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        line_ori_image->setText(QApplication::translate("MainWindow", "ori", nullptr));
        line_trans_image->setText(QApplication::translate("MainWindow", "trans", nullptr));
        point_type->setTabText(point_type->indexOf(line_trans), QApplication::translate("MainWindow", "\347\272\277\346\200\247\345\217\230\346\215\242", nullptr));
        nline_f1->setText(QApplication::translate("MainWindow", "f(D) = ", nullptr));
        nline_c1->setPlaceholderText(QApplication::translate("MainWindow", "c", nullptr));
        nline_d1->setText(QApplication::translate("MainWindow", "*log(D+1)", nullptr));
        nline_push1->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        nline_ori1_image->setText(QApplication::translate("MainWindow", "ori", nullptr));
        nline_trans1_image->setText(QApplication::translate("MainWindow", "ori", nullptr));
        point_type->setTabText(point_type->indexOf(nline_trans1), QApplication::translate("MainWindow", "\351\235\236\347\272\277\346\200\247\345\217\230\346\215\2421", nullptr));
        nline_f2->setText(QApplication::translate("MainWindow", "f(D) = ", nullptr));
        nline_a2->setPlaceholderText(QApplication::translate("MainWindow", "a", nullptr));
        nline_d2->setText(QApplication::translate("MainWindow", "D^", nullptr));
        nline_b2->setPlaceholderText(QApplication::translate("MainWindow", "b", nullptr));
        nline_push2->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        nline_ori2_image->setText(QApplication::translate("MainWindow", "ori", nullptr));
        nline_trans2_image->setText(QApplication::translate("MainWindow", "trans", nullptr));
        point_type->setTabText(point_type->indexOf(nline_trans2), QApplication::translate("MainWindow", "\351\235\236\347\272\277\346\200\247\345\217\230\346\215\2422", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(point), QApplication::translate("MainWindow", "\347\202\271\350\277\220\347\256\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
