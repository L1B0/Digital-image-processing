/********************************************************************************
** Form generated from reading UI file 'imagesharpenmode.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGESHARPENMODE_H
#define UI_IMAGESHARPENMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_imageSharpenMode
{
public:
    QDialogButtonBox *buttonBox;
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *x;
    QLabel *label_2;
    QLineEdit *y;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *imageSharpenMode)
    {
        if (imageSharpenMode->objectName().isEmpty())
            imageSharpenMode->setObjectName(QStringLiteral("imageSharpenMode"));
        imageSharpenMode->resize(568, 403);
        buttonBox = new QDialogButtonBox(imageSharpenMode);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(190, 340, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tableWidget = new QTableWidget(imageSharpenMode);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem9);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 140, 521, 181));
        layoutWidget = new QWidget(imageSharpenMode);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 90, 247, 55));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        x = new QLineEdit(layoutWidget);
        x->setObjectName(QStringLiteral("x"));

        horizontalLayout->addWidget(x);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(26);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        y = new QLineEdit(layoutWidget);
        y->setObjectName(QStringLiteral("y"));

        horizontalLayout->addWidget(y);

        widget = new QWidget(imageSharpenMode);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 10, 331, 81));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(13);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        verticalLayout->addWidget(label_4);


        retranslateUi(imageSharpenMode);
        QObject::connect(buttonBox, SIGNAL(accepted()), imageSharpenMode, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), imageSharpenMode, SLOT(reject()));

        QMetaObject::connectSlotsByName(imageSharpenMode);
    } // setupUi

    void retranslateUi(QDialog *imageSharpenMode)
    {
        imageSharpenMode->setWindowTitle(QApplication::translate("imageSharpenMode", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("imageSharpenMode", "x1", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("imageSharpenMode", "x2", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("imageSharpenMode", "x3", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("imageSharpenMode", "x4", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("imageSharpenMode", "x5", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("imageSharpenMode", "y1", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("imageSharpenMode", "y2", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("imageSharpenMode", "y3", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("imageSharpenMode", "y4", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("imageSharpenMode", "y5", nullptr));
        x->setPlaceholderText(QApplication::translate("imageSharpenMode", "x", nullptr));
        label_2->setText(QApplication::translate("imageSharpenMode", "*", nullptr));
        y->setPlaceholderText(QApplication::translate("imageSharpenMode", "y", nullptr));
        label->setText(QApplication::translate("imageSharpenMode", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\350\207\252\345\256\232\344\271\211\346\250\241\346\235\277\357\274\210\346\234\200\345\244\247\344\270\215\350\266\205\350\277\2075*5\357\274\211", nullptr));
        label_3->setText(QApplication::translate("imageSharpenMode", "\350\213\245\351\225\277\346\210\226\345\256\275\344\270\272\345\201\266\346\225\260\357\274\214\351\273\230\350\256\244\344\270\255\345\277\203\345\217\226\345\217\263\344\270\213\350\247\222", nullptr));
        label_4->setText(QApplication::translate("imageSharpenMode", "\350\257\267\344\273\216\345\267\246\344\270\212\350\247\222\345\274\200\345\247\213\350\276\223\345\205\245!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class imageSharpenMode: public Ui_imageSharpenMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGESHARPENMODE_H
