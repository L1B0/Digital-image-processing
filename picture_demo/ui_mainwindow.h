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
    QLabel *original_page;
    QWidget *sampling_rate;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *width;
    QLabel *mult;
    QLineEdit *length;
    QPushButton *sampling;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_8;
    QLabel *sampling_page;
    QCustomPlot *sampling_paint;
    QWidget *gray;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *gray_level;
    QPushButton *gray_determine;
    QWidget *layoutWidget3;
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
    QTableWidget *histogram_info;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *histogram_page;
    QCustomPlot *histogram_paint;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *threshold;
    QPushButton *threshold_update;
    QWidget *point;
    QTabWidget *point_type;
    QWidget *line_trans;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_11;
    QLabel *line_trans_image;
    QCustomPlot *line_trans_paint;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *line_ori_image;
    QCustomPlot *line_ori_paint;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_12;
    QLabel *line_f1;
    QLineEdit *line_a1;
    QLabel *line_d1;
    QLineEdit *line_b1;
    QPushButton *line_push;
    QWidget *nline_trans1;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_14;
    QLabel *nline_trans1_image;
    QCustomPlot *nline_trans1_paint;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_15;
    QLabel *nline_ori1_image;
    QCustomPlot *nline_ori1_paint;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout_17;
    QLabel *nline_f1;
    QLineEdit *nline_c1;
    QLabel *nline_d1;
    QPushButton *nline_push1;
    QWidget *nline_trans2;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_18;
    QLabel *nline_ori2_image;
    QCustomPlot *nline_ori2_paint;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_16;
    QLabel *nline_trans2_image;
    QCustomPlot *nline_trans2_paint;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_21;
    QHBoxLayout *horizontalLayout_22;
    QLabel *nline_f2;
    QLineEdit *nline_a2;
    QLabel *nline_d2;
    QLineEdit *nline_b2;
    QPushButton *nline_push2;
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
        tabWidget->setGeometry(QRect(10, 10, 1141, 781));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setIconSize(QSize(18, 18));
        original = new QWidget();
        original->setObjectName(QStringLiteral("original"));
        original_page = new QLabel(original);
        original_page->setObjectName(QStringLiteral("original_page"));
        original_page->setGeometry(QRect(30, 40, 991, 681));
        tabWidget->addTab(original, QString());
        sampling_rate = new QWidget();
        sampling_rate->setObjectName(QStringLiteral("sampling_rate"));
        layoutWidget = new QWidget(sampling_rate);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 20, 211, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        width = new QLineEdit(layoutWidget);
        width->setObjectName(QStringLiteral("width"));
        sizePolicy.setHeightForWidth(width->sizePolicy().hasHeightForWidth());
        width->setSizePolicy(sizePolicy);
        width->setMaxLength(3);

        horizontalLayout->addWidget(width);

        mult = new QLabel(layoutWidget);
        mult->setObjectName(QStringLiteral("mult"));
        QFont font;
        font.setPointSize(15);
        font.setBold(false);
        font.setWeight(50);
        mult->setFont(font);

        horizontalLayout->addWidget(mult);

        length = new QLineEdit(layoutWidget);
        length->setObjectName(QStringLiteral("length"));
        sizePolicy.setHeightForWidth(length->sizePolicy().hasHeightForWidth());
        length->setSizePolicy(sizePolicy);
        length->setMaxLength(3);

        horizontalLayout->addWidget(length);

        sampling = new QPushButton(layoutWidget);
        sampling->setObjectName(QStringLiteral("sampling"));

        horizontalLayout->addWidget(sampling);

        layoutWidget1 = new QWidget(sampling_rate);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 70, 1011, 681));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        sampling_page = new QLabel(layoutWidget1);
        sampling_page->setObjectName(QStringLiteral("sampling_page"));

        horizontalLayout_8->addWidget(sampling_page);

        sampling_paint = new QCustomPlot(layoutWidget1);
        sampling_paint->setObjectName(QStringLiteral("sampling_paint"));

        horizontalLayout_8->addWidget(sampling_paint);

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

        layoutWidget3 = new QWidget(gray);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(40, 60, 1011, 691));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        gray_page = new QLabel(layoutWidget3);
        gray_page->setObjectName(QStringLiteral("gray_page"));

        horizontalLayout_9->addWidget(gray_page);

        gray_paint = new QCustomPlot(layoutWidget3);
        gray_paint->setObjectName(QStringLiteral("gray_paint"));

        horizontalLayout_9->addWidget(gray_paint);

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
        QFont font1;
        font1.setPointSize(18);
        bitplane_save->setFont(font1);
        tabWidget->addTab(bitplane, QString());
        histogram = new QWidget();
        histogram->setObjectName(QStringLiteral("histogram"));
        histogram_info = new QTableWidget(histogram);
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
        histogram_info->setGeometry(QRect(570, 50, 411, 51));
        layoutWidget4 = new QWidget(histogram);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(30, 120, 1041, 631));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        histogram_page = new QLabel(layoutWidget4);
        histogram_page->setObjectName(QStringLiteral("histogram_page"));

        horizontalLayout_5->addWidget(histogram_page);

        histogram_paint = new QCustomPlot(layoutWidget4);
        histogram_paint->setObjectName(QStringLiteral("histogram_paint"));

        horizontalLayout_5->addWidget(histogram_paint);

        layoutWidget5 = new QWidget(histogram);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(120, 60, 236, 30));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(layoutWidget5);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setPointSize(12);
        label->setFont(font2);

        horizontalLayout_6->addWidget(label);

        threshold = new QLineEdit(layoutWidget5);
        threshold->setObjectName(QStringLiteral("threshold"));

        horizontalLayout_6->addWidget(threshold);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        threshold_update = new QPushButton(layoutWidget5);
        threshold_update->setObjectName(QStringLiteral("threshold_update"));

        horizontalLayout_7->addWidget(threshold_update);

        tabWidget->addTab(histogram, QString());
        point = new QWidget();
        point->setObjectName(QStringLiteral("point"));
        point_type = new QTabWidget(point);
        point_type->setObjectName(QStringLiteral("point_type"));
        point_type->setGeometry(QRect(20, 10, 1061, 731));
        line_trans = new QWidget();
        line_trans->setObjectName(QStringLiteral("line_trans"));
        layoutWidget6 = new QWidget(line_trans);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(30, 400, 991, 271));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        line_trans_image = new QLabel(layoutWidget6);
        line_trans_image->setObjectName(QStringLiteral("line_trans_image"));
        line_trans_image->setScaledContents(false);

        horizontalLayout_11->addWidget(line_trans_image);

        line_trans_paint = new QCustomPlot(layoutWidget6);
        line_trans_paint->setObjectName(QStringLiteral("line_trans_paint"));

        horizontalLayout_11->addWidget(line_trans_paint);

        layoutWidget7 = new QWidget(line_trans);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(30, 20, 991, 341));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        line_ori_image = new QLabel(layoutWidget7);
        line_ori_image->setObjectName(QStringLiteral("line_ori_image"));
        line_ori_image->setScaledContents(false);

        horizontalLayout_10->addWidget(line_ori_image);

        line_ori_paint = new QCustomPlot(layoutWidget7);
        line_ori_paint->setObjectName(QStringLiteral("line_ori_paint"));

        horizontalLayout_10->addWidget(line_ori_paint);

        layoutWidget8 = new QWidget(line_trans);
        layoutWidget8->setObjectName(QStringLiteral("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(350, 360, 301, 41));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        line_f1 = new QLabel(layoutWidget8);
        line_f1->setObjectName(QStringLiteral("line_f1"));
        QFont font3;
        font3.setPointSize(14);
        line_f1->setFont(font3);

        horizontalLayout_12->addWidget(line_f1);

        line_a1 = new QLineEdit(layoutWidget8);
        line_a1->setObjectName(QStringLiteral("line_a1"));
        line_a1->setMaxLength(5);

        horizontalLayout_12->addWidget(line_a1);

        line_d1 = new QLabel(layoutWidget8);
        line_d1->setObjectName(QStringLiteral("line_d1"));
        line_d1->setEnabled(true);
        line_d1->setFont(font3);

        horizontalLayout_12->addWidget(line_d1);

        line_b1 = new QLineEdit(layoutWidget8);
        line_b1->setObjectName(QStringLiteral("line_b1"));
        line_b1->setMaxLength(5);

        horizontalLayout_12->addWidget(line_b1);


        horizontalLayout_13->addLayout(horizontalLayout_12);

        line_push = new QPushButton(layoutWidget8);
        line_push->setObjectName(QStringLiteral("line_push"));

        horizontalLayout_13->addWidget(line_push);

        point_type->addTab(line_trans, QString());
        nline_trans1 = new QWidget();
        nline_trans1->setObjectName(QStringLiteral("nline_trans1"));
        layoutWidget_3 = new QWidget(nline_trans1);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 400, 991, 271));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        nline_trans1_image = new QLabel(layoutWidget_3);
        nline_trans1_image->setObjectName(QStringLiteral("nline_trans1_image"));
        nline_trans1_image->setScaledContents(false);

        horizontalLayout_14->addWidget(nline_trans1_image);

        nline_trans1_paint = new QCustomPlot(layoutWidget_3);
        nline_trans1_paint->setObjectName(QStringLiteral("nline_trans1_paint"));

        horizontalLayout_14->addWidget(nline_trans1_paint);

        layoutWidget_4 = new QWidget(nline_trans1);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(30, 20, 991, 341));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        nline_ori1_image = new QLabel(layoutWidget_4);
        nline_ori1_image->setObjectName(QStringLiteral("nline_ori1_image"));
        nline_ori1_image->setScaledContents(false);

        horizontalLayout_15->addWidget(nline_ori1_image);

        nline_ori1_paint = new QCustomPlot(layoutWidget_4);
        nline_ori1_paint->setObjectName(QStringLiteral("nline_ori1_paint"));

        horizontalLayout_15->addWidget(nline_ori1_paint);

        layoutWidget9 = new QWidget(nline_trans1);
        layoutWidget9->setObjectName(QStringLiteral("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(350, 360, 294, 41));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget9);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        nline_f1 = new QLabel(layoutWidget9);
        nline_f1->setObjectName(QStringLiteral("nline_f1"));
        nline_f1->setFont(font3);

        horizontalLayout_17->addWidget(nline_f1);

        nline_c1 = new QLineEdit(layoutWidget9);
        nline_c1->setObjectName(QStringLiteral("nline_c1"));
        nline_c1->setMaxLength(4);

        horizontalLayout_17->addWidget(nline_c1);

        nline_d1 = new QLabel(layoutWidget9);
        nline_d1->setObjectName(QStringLiteral("nline_d1"));
        nline_d1->setFont(font3);

        horizontalLayout_17->addWidget(nline_d1);

        nline_push1 = new QPushButton(layoutWidget9);
        nline_push1->setObjectName(QStringLiteral("nline_push1"));

        horizontalLayout_17->addWidget(nline_push1);

        point_type->addTab(nline_trans1, QString());
        nline_trans2 = new QWidget();
        nline_trans2->setObjectName(QStringLiteral("nline_trans2"));
        layoutWidget_6 = new QWidget(nline_trans2);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(30, 20, 991, 341));
        horizontalLayout_18 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        nline_ori2_image = new QLabel(layoutWidget_6);
        nline_ori2_image->setObjectName(QStringLiteral("nline_ori2_image"));
        nline_ori2_image->setScaledContents(false);

        horizontalLayout_18->addWidget(nline_ori2_image);

        nline_ori2_paint = new QCustomPlot(layoutWidget_6);
        nline_ori2_paint->setObjectName(QStringLiteral("nline_ori2_paint"));

        horizontalLayout_18->addWidget(nline_ori2_paint);

        layoutWidget_5 = new QWidget(nline_trans2);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(30, 400, 991, 271));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        nline_trans2_image = new QLabel(layoutWidget_5);
        nline_trans2_image->setObjectName(QStringLiteral("nline_trans2_image"));
        nline_trans2_image->setScaledContents(false);

        horizontalLayout_16->addWidget(nline_trans2_image);

        nline_trans2_paint = new QCustomPlot(layoutWidget_5);
        nline_trans2_paint->setObjectName(QStringLiteral("nline_trans2_paint"));

        horizontalLayout_16->addWidget(nline_trans2_paint);

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

        tabWidget->setCurrentIndex(5);
        point_type->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        openFile->setText(QApplication::translate("MainWindow", "open", nullptr));
        saveFIle->setText(QApplication::translate("MainWindow", "save", nullptr));
        original_page->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(original), QApplication::translate("MainWindow", "\345\216\237\345\233\276", nullptr));
        width->setInputMask(QString());
        width->setPlaceholderText(QString());
        mult->setText(QApplication::translate("MainWindow", "*", nullptr));
        sampling->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        sampling_page->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(sampling_rate), QApplication::translate("MainWindow", "\351\207\207\346\240\267\347\216\207", nullptr));
        gray_determine->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        gray_page->setText(QString());
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
        histogram_page->setText(QString());
        label->setText(QApplication::translate("MainWindow", "\351\230\200\345\200\274", nullptr));
        threshold_update->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(histogram), QApplication::translate("MainWindow", "\347\201\260\345\272\246\347\233\264\346\226\271\345\233\276", nullptr));
        line_trans_image->setText(QApplication::translate("MainWindow", "trans", nullptr));
        line_ori_image->setText(QApplication::translate("MainWindow", "ori", nullptr));
        line_f1->setText(QApplication::translate("MainWindow", "f(D) = ", nullptr));
        line_d1->setText(QApplication::translate("MainWindow", "*D + ", nullptr));
        line_push->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        point_type->setTabText(point_type->indexOf(line_trans), QApplication::translate("MainWindow", "\347\272\277\346\200\247\345\217\230\346\215\242", nullptr));
        nline_trans1_image->setText(QApplication::translate("MainWindow", "trans", nullptr));
        nline_ori1_image->setText(QApplication::translate("MainWindow", "ori", nullptr));
        nline_f1->setText(QApplication::translate("MainWindow", "f(D) = ", nullptr));
        nline_c1->setPlaceholderText(QApplication::translate("MainWindow", "c", nullptr));
        nline_d1->setText(QApplication::translate("MainWindow", "*log(D+1)", nullptr));
        nline_push1->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        point_type->setTabText(point_type->indexOf(nline_trans1), QApplication::translate("MainWindow", "\351\235\236\347\272\277\346\200\247\345\217\230\346\215\2421", nullptr));
        nline_ori2_image->setText(QApplication::translate("MainWindow", "ori", nullptr));
        nline_trans2_image->setText(QApplication::translate("MainWindow", "trans", nullptr));
        nline_f2->setText(QApplication::translate("MainWindow", "f(D) = ", nullptr));
        nline_d2->setText(QApplication::translate("MainWindow", "D^", nullptr));
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
