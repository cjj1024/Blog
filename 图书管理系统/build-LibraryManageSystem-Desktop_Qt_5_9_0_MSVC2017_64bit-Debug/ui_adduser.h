/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddUser
{
public:
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *idLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *confirmPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QWidget *AddUser)
    {
        if (AddUser->objectName().isEmpty())
            AddUser->setObjectName(QStringLiteral("AddUser"));
        AddUser->resize(400, 300);
        horizontalLayout_5 = new QHBoxLayout(AddUser);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(AddUser);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        idLineEdit = new QLineEdit(AddUser);
        idLineEdit->setObjectName(QStringLiteral("idLineEdit"));

        horizontalLayout->addWidget(idLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(AddUser);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        nameLineEdit = new QLineEdit(AddUser);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        horizontalLayout_2->addWidget(nameLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(AddUser);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        passwordLineEdit = new QLineEdit(AddUser);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));

        horizontalLayout_3->addWidget(passwordLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        confirmPushButton = new QPushButton(AddUser);
        confirmPushButton->setObjectName(QStringLiteral("confirmPushButton"));

        horizontalLayout_4->addWidget(confirmPushButton);

        cancelPushButton = new QPushButton(AddUser);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout_4->addWidget(cancelPushButton);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout);


        retranslateUi(AddUser);

        QMetaObject::connectSlotsByName(AddUser);
    } // setupUi

    void retranslateUi(QWidget *AddUser)
    {
        AddUser->setWindowTitle(QApplication::translate("AddUser", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddUser", "\347\224\250\346\210\267\347\274\226\345\217\267\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("AddUser", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddUser", "\347\224\250\346\210\267\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        confirmPushButton->setText(QApplication::translate("AddUser", "\347\241\256\345\256\232", Q_NULLPTR));
        cancelPushButton->setText(QApplication::translate("AddUser", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddUser: public Ui_AddUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
