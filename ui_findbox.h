/********************************************************************************
** Form generated from reading UI file 'findbox.ui'
**
** Created by: Qt User Interface Compiler version 5.15.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDBOX_H
#define UI_FINDBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FindBox
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *FindBox)
    {
        if (FindBox->objectName().isEmpty())
            FindBox->setObjectName(QString::fromUtf8("FindBox"));
        FindBox->resize(400, 165);
        lineEdit = new QLineEdit(FindBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 50, 201, 26));
        pushButton = new QPushButton(FindBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 110, 80, 26));
        pushButton_2 = new QPushButton(FindBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 110, 80, 26));
        label = new QLabel(FindBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 50, 55, 21));

        retranslateUi(FindBox);

        QMetaObject::connectSlotsByName(FindBox);
    } // setupUi

    void retranslateUi(QDialog *FindBox)
    {
        FindBox->setWindowTitle(QCoreApplication::translate("FindBox", "Dialog", nullptr));
        lineEdit->setText(QString());
        pushButton->setText(QCoreApplication::translate("FindBox", "Find", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FindBox", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("FindBox", "Search:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindBox: public Ui_FindBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDBOX_H
