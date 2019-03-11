/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QTreeWidget *treeWidget;
    QPushButton *cancelPushButton;
    QPushButton *confirmPushButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(514, 483);
        treeWidget = new QTreeWidget(Form);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(0, 0, 511, 371));
        cancelPushButton = new QPushButton(Form);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));
        cancelPushButton->setGeometry(QRect(250, 420, 75, 23));
        confirmPushButton = new QPushButton(Form);
        confirmPushButton->setObjectName(QStringLiteral("confirmPushButton"));
        confirmPushButton->setGeometry(QRect(150, 420, 75, 23));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", Q_NULLPTR));
        cancelPushButton->setText(QApplication::translate("Form", "\345\217\226\346\266\210", Q_NULLPTR));
        confirmPushButton->setText(QApplication::translate("Form", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
