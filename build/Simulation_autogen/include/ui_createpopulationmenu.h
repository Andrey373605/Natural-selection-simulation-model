/********************************************************************************
** Form generated from reading UI file 'createpopulationmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPOPULATIONMENU_H
#define UI_CREATEPOPULATIONMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreatePopulationMenu
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpinBox *genome_size_box;
    QSpinBox *min_population_size_box;
    QLabel *label_4;
    QLabel *label;

    void setupUi(QDialog *CreatePopulationMenu)
    {
        if (CreatePopulationMenu->objectName().isEmpty())
            CreatePopulationMenu->setObjectName(QString::fromUtf8("CreatePopulationMenu"));
        CreatePopulationMenu->resize(508, 444);
        buttonBox = new QDialogButtonBox(CreatePopulationMenu);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(150, 390, 171, 31));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        gridLayoutWidget = new QWidget(CreatePopulationMenu);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 60, 441, 271));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        genome_size_box = new QSpinBox(gridLayoutWidget);
        genome_size_box->setObjectName(QString::fromUtf8("genome_size_box"));
        genome_size_box->setMinimum(8);
        genome_size_box->setMaximum(128);
        genome_size_box->setValue(32);

        gridLayout->addWidget(genome_size_box, 0, 2, 1, 1);

        min_population_size_box = new QSpinBox(gridLayoutWidget);
        min_population_size_box->setObjectName(QString::fromUtf8("min_population_size_box"));
        min_population_size_box->setMinimum(1);
        min_population_size_box->setMaximum(16);
        min_population_size_box->setValue(16);

        gridLayout->addWidget(min_population_size_box, 1, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(CreatePopulationMenu);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CreatePopulationMenu, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CreatePopulationMenu, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CreatePopulationMenu);
    } // setupUi

    void retranslateUi(QDialog *CreatePopulationMenu)
    {
        CreatePopulationMenu->setWindowTitle(QCoreApplication::translate("CreatePopulationMenu", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("CreatePopulationMenu", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\320\265\321\200\320\265\320\264\320\260\320\262\320\260\320\265\320\274\321\213\321\205 \320\263\320\265\320\275\320\276\320\274\320\276\320\262", nullptr));
        label->setText(QCoreApplication::translate("CreatePopulationMenu", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\263\320\265\320\275\320\276\320\274\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreatePopulationMenu: public Ui_CreatePopulationMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPOPULATIONMENU_H
