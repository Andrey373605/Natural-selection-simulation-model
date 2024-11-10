/********************************************************************************
** Form generated from reading UI file 'settingsmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSMENU_H
#define UI_SETTINGSMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsMenu
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpinBox *max_hp_box;
    QSlider *ratio_box;
    QLabel *label_10;
    QLabel *label_5;
    QSpinBox *food_heal_box;
    QSpinBox *count_walls_box;
    QLabel *label_11;
    QSpinBox *max_food_poison_box;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_6;
    QSpinBox *max_wall_size;
    QLabel *label_7;
    QSpinBox *min_wall_size;

    void setupUi(QDialog *SettingsMenu)
    {
        if (SettingsMenu->objectName().isEmpty())
            SettingsMenu->setObjectName(QString::fromUtf8("SettingsMenu"));
        SettingsMenu->resize(473, 459);
        buttonBox = new QDialogButtonBox(SettingsMenu);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(150, 400, 181, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        gridLayoutWidget = new QWidget(SettingsMenu);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 20, 411, 351));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        max_hp_box = new QSpinBox(gridLayoutWidget);
        max_hp_box->setObjectName(QString::fromUtf8("max_hp_box"));
        max_hp_box->setMinimum(10);
        max_hp_box->setMaximum(500);
        max_hp_box->setValue(100);

        gridLayout->addWidget(max_hp_box, 0, 2, 1, 1);

        ratio_box = new QSlider(gridLayoutWidget);
        ratio_box->setObjectName(QString::fromUtf8("ratio_box"));
        ratio_box->setMaximum(1000);
        ratio_box->setSingleStep(10);
        ratio_box->setValue(500);
        ratio_box->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(ratio_box, 3, 2, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 5, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        food_heal_box = new QSpinBox(gridLayoutWidget);
        food_heal_box->setObjectName(QString::fromUtf8("food_heal_box"));
        food_heal_box->setMinimum(1);
        food_heal_box->setMaximum(100);
        food_heal_box->setValue(10);

        gridLayout->addWidget(food_heal_box, 1, 2, 1, 1);

        count_walls_box = new QSpinBox(gridLayoutWidget);
        count_walls_box->setObjectName(QString::fromUtf8("count_walls_box"));
        count_walls_box->setMaximum(50);
        count_walls_box->setValue(20);

        gridLayout->addWidget(count_walls_box, 4, 2, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 6, 0, 1, 1);

        max_food_poison_box = new QSpinBox(gridLayoutWidget);
        max_food_poison_box->setObjectName(QString::fromUtf8("max_food_poison_box"));
        max_food_poison_box->setMinimum(0);
        max_food_poison_box->setMaximum(7000);
        max_food_poison_box->setSingleStep(100);
        max_food_poison_box->setValue(3000);

        gridLayout->addWidget(max_food_poison_box, 2, 2, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 4, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        max_wall_size = new QSpinBox(gridLayoutWidget);
        max_wall_size->setObjectName(QString::fromUtf8("max_wall_size"));
        max_wall_size->setMaximum(100);
        max_wall_size->setValue(50);

        gridLayout->addWidget(max_wall_size, 6, 2, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        min_wall_size = new QSpinBox(gridLayoutWidget);
        min_wall_size->setObjectName(QString::fromUtf8("min_wall_size"));
        min_wall_size->setMaximum(50);
        min_wall_size->setValue(20);

        gridLayout->addWidget(min_wall_size, 5, 2, 1, 1);


        retranslateUi(SettingsMenu);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SettingsMenu, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SettingsMenu, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SettingsMenu);
    } // setupUi

    void retranslateUi(QDialog *SettingsMenu)
    {
        SettingsMenu->setWindowTitle(QCoreApplication::translate("SettingsMenu", "Dialog", nullptr));
        label_10->setText(QCoreApplication::translate("SettingsMenu", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \321\200\320\260\320\267\320\274\320\265\321\200 \321\201\321\202\320\265\320\275\321\213", nullptr));
        label_5->setText(QCoreApplication::translate("SettingsMenu", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \320\267\320\264\320\276\321\200\320\276\320\262\321\214\320\265", nullptr));
        label_11->setText(QCoreApplication::translate("SettingsMenu", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \321\200\320\260\320\267\320\274\320\265\321\200 \321\201\321\202\320\265\320\275\321\213", nullptr));
        label_8->setText(QCoreApplication::translate("SettingsMenu", "\320\241\320\276\320\276\321\202\320\275\320\276\321\210\320\265\320\275\320\270\320\265 \320\265\320\264\321\213 \320\270 \321\217\320\264\320\260", nullptr));
        label_9->setText(QCoreApplication::translate("SettingsMenu", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\320\262\321\202\320\276 \321\201\321\202\320\265\320\275", nullptr));
        label_6->setText(QCoreApplication::translate("SettingsMenu", "\320\222\320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265 \320\276\321\202 \320\265\320\264\321\213", nullptr));
        label_7->setText(QCoreApplication::translate("SettingsMenu", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\265\320\264\321\213 \320\270 \321\217\320\264\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsMenu: public Ui_SettingsMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSMENU_H
