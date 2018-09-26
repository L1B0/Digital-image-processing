/********************************************************************************
** Form generated from reading UI file 'bitplane.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BITPLANE_H
#define UI_BITPLANE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bitplane
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *bit1;
    QLabel *bit2;
    QLabel *bit3;
    QLabel *bit4;
    QHBoxLayout *horizontalLayout;
    QLabel *bit5;
    QLabel *bit6;
    QLabel *bit7;
    QLabel *bit8;

    void setupUi(QWidget *bitplane)
    {
        if (bitplane->objectName().isEmpty())
            bitplane->setObjectName(QStringLiteral("bitplane"));
        bitplane->resize(1184, 670);
        layoutWidget = new QWidget(bitplane);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 40, 1121, 611));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        bit1 = new QLabel(layoutWidget);
        bit1->setObjectName(QStringLiteral("bit1"));

        horizontalLayout_2->addWidget(bit1);

        bit2 = new QLabel(layoutWidget);
        bit2->setObjectName(QStringLiteral("bit2"));

        horizontalLayout_2->addWidget(bit2);

        bit3 = new QLabel(layoutWidget);
        bit3->setObjectName(QStringLiteral("bit3"));

        horizontalLayout_2->addWidget(bit3);

        bit4 = new QLabel(layoutWidget);
        bit4->setObjectName(QStringLiteral("bit4"));

        horizontalLayout_2->addWidget(bit4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        bit5 = new QLabel(layoutWidget);
        bit5->setObjectName(QStringLiteral("bit5"));

        horizontalLayout->addWidget(bit5);

        bit6 = new QLabel(layoutWidget);
        bit6->setObjectName(QStringLiteral("bit6"));

        horizontalLayout->addWidget(bit6);

        bit7 = new QLabel(layoutWidget);
        bit7->setObjectName(QStringLiteral("bit7"));

        horizontalLayout->addWidget(bit7);

        bit8 = new QLabel(layoutWidget);
        bit8->setObjectName(QStringLiteral("bit8"));

        horizontalLayout->addWidget(bit8);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(bitplane);

        QMetaObject::connectSlotsByName(bitplane);
    } // setupUi

    void retranslateUi(QWidget *bitplane)
    {
        bitplane->setWindowTitle(QApplication::translate("bitplane", "Form", nullptr));
        bit1->setText(QApplication::translate("bitplane", "bit_1", nullptr));
        bit2->setText(QApplication::translate("bitplane", "bit_2", nullptr));
        bit3->setText(QApplication::translate("bitplane", "bit_3", nullptr));
        bit4->setText(QApplication::translate("bitplane", "bit_4", nullptr));
        bit5->setText(QApplication::translate("bitplane", "bit_5", nullptr));
        bit6->setText(QApplication::translate("bitplane", "bit_6", nullptr));
        bit7->setText(QApplication::translate("bitplane", "bit_7", nullptr));
        bit8->setText(QApplication::translate("bitplane", "bit_8", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bitplane: public Ui_bitplane {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BITPLANE_H
