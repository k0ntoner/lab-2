/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Secondwindow
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *Secondwindow)
    {
        if (Secondwindow->objectName().isEmpty())
            Secondwindow->setObjectName("Secondwindow");
        Secondwindow->resize(400, 300);
        buttonBox = new QDialogButtonBox(Secondwindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Secondwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 231, 16));

        retranslateUi(Secondwindow);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Secondwindow, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Secondwindow, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Secondwindow);
    } // setupUi

    void retranslateUi(QDialog *Secondwindow)
    {
        Secondwindow->setWindowTitle(QCoreApplication::translate("Secondwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Secondwindow", "Your account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Secondwindow: public Ui_Secondwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
