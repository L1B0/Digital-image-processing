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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *openFile;
    QAction *saveFIle;
    QWidget *centralWidget;
    QLabel *labelimage;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *gray_level;
    QPushButton *gray_determine;
    QPushButton *bitPlane;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *width;
    QLabel *label_4;
    QLineEdit *length;
    QPushButton *re_determine;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1026, 714);
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
        labelimage = new QLabel(centralWidget);
        labelimage->setObjectName(QStringLiteral("labelimage"));
        labelimage->setGeometry(QRect(30, 30, 711, 641));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(830, 340, 112, 91));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        gray_level = new QLineEdit(layoutWidget);
        gray_level->setObjectName(QStringLiteral("gray_level"));
        gray_level->setMaxLength(3);

        verticalLayout_2->addWidget(gray_level);


        verticalLayout_4->addLayout(verticalLayout_2);

        gray_determine = new QPushButton(layoutWidget);
        gray_determine->setObjectName(QStringLiteral("gray_determine"));

        verticalLayout_4->addWidget(gray_determine);

        bitPlane = new QPushButton(centralWidget);
        bitPlane->setObjectName(QStringLiteral("bitPlane"));
        bitPlane->setGeometry(QRect(820, 480, 161, 26));
        QFont font1;
        font1.setPointSize(11);
        bitPlane->setFont(font1);
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(820, 190, 131, 96));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        width = new QLineEdit(layoutWidget1);
        width->setObjectName(QStringLiteral("width"));
        sizePolicy.setHeightForWidth(width->sizePolicy().hasHeightForWidth());
        width->setSizePolicy(sizePolicy);
        width->setMaxLength(3);

        horizontalLayout->addWidget(width);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(false);
        font2.setWeight(50);
        label_4->setFont(font2);

        horizontalLayout->addWidget(label_4);

        length = new QLineEdit(layoutWidget1);
        length->setObjectName(QStringLiteral("length"));
        sizePolicy.setHeightForWidth(length->sizePolicy().hasHeightForWidth());
        length->setSizePolicy(sizePolicy);
        length->setMaxLength(3);

        horizontalLayout->addWidget(length);


        verticalLayout->addLayout(horizontalLayout);

        re_determine = new QPushButton(layoutWidget1);
        re_determine->setObjectName(QStringLiteral("re_determine"));

        verticalLayout->addWidget(re_determine);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        openFile->setText(QApplication::translate("MainWindow", "open", nullptr));
        saveFIle->setText(QApplication::translate("MainWindow", "save", nullptr));
        labelimage->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "2. \347\201\260\345\272\246\347\272\247", nullptr));
        gray_determine->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        bitPlane->setText(QApplication::translate("MainWindow", "3. \345\205\253\345\271\205\344\275\215\345\271\263\351\235\242\347\232\204\344\272\214\345\200\274\345\233\276", nullptr));
        label->setText(QApplication::translate("MainWindow", "1. \345\210\206\350\276\250\347\216\207", nullptr));
        width->setInputMask(QString());
        width->setPlaceholderText(QString());
        label_4->setText(QApplication::translate("MainWindow", "*", nullptr));
        re_determine->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
