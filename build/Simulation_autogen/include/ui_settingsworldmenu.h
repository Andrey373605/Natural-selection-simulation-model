/********************************************************************************
** Form generated from reading UI file 'settingsworldmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWORLDMENU_H
#define UI_SETTINGSWORLDMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_SettingsWorldMenu
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsWorldMenu)
    {
        if (SettingsWorldMenu->objectName().isEmpty())
            SettingsWorldMenu->setObjectName(QString::fromUtf8("SettingsWorldMenu"));
        SettingsWorldMenu->resize(400, 300);
        buttonBox = new QDialogButtonBox(SettingsWorldMenu);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(SettingsWorldMenu);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SettingsWorldMenu, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SettingsWorldMenu, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SettingsWorldMenu);
    } // setupUi

    void retranslateUi(QDialog *SettingsWorldMenu)
    {
        SettingsWorldMenu->setWindowTitle(QCoreApplication::translate("SettingsWorldMenu", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWorldMenu: public Ui_SettingsWorldMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWORLDMENU_H
