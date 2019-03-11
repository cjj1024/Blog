/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_Login
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *loginPushButton;
    QPushButton *closePushButton;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(400, 300);
        horizontalLayout_4 = new QHBoxLayout(Login);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        nameLabel = new QLabel(Login);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        horizontalLayout_2->addWidget(nameLabel);

        nameLineEdit = new QLineEdit(Login);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        horizontalLayout_2->addWidget(nameLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        passwordLabel = new QLabel(Login);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        horizontalLayout_3->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(Login);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));

        horizontalLayout_3->addWidget(passwordLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        loginPushButton = new QPushButton(Login);
        loginPushButton->setObjectName(QStringLiteral("loginPushButton"));

        horizontalLayout->addWidget(loginPushButton);

        closePushButton = new QPushButton(Login);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(verticalLayout);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("Login", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        passwordLabel->setText(QApplication::translate("Login", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        loginPushButton->setText(QApplication::translate("Login", "\347\231\273\351\231\206", Q_NULLPTR));
        closePushButton->setText(QApplication::translate("Login", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
