/********************************************************************************
** Form generated from reading UI file 'addbook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOK_H
#define UI_ADDBOOK_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddBook
{
public:
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *idLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *authorLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *categoryLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QTextEdit *introductionTextEdit;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *confirmPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QWidget *AddBook)
    {
        if (AddBook->objectName().isEmpty())
            AddBook->setObjectName(QStringLiteral("AddBook"));
        AddBook->resize(363, 366);
        horizontalLayout_7 = new QHBoxLayout(AddBook);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(AddBook);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        idLineEdit = new QLineEdit(AddBook);
        idLineEdit->setObjectName(QStringLiteral("idLineEdit"));

        horizontalLayout->addWidget(idLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(AddBook);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        nameLineEdit = new QLineEdit(AddBook);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        horizontalLayout_2->addWidget(nameLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(AddBook);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        authorLineEdit = new QLineEdit(AddBook);
        authorLineEdit->setObjectName(QStringLiteral("authorLineEdit"));

        horizontalLayout_3->addWidget(authorLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(AddBook);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        categoryLineEdit = new QLineEdit(AddBook);
        categoryLineEdit->setObjectName(QStringLiteral("categoryLineEdit"));

        horizontalLayout_4->addWidget(categoryLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(AddBook);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        introductionTextEdit = new QTextEdit(AddBook);
        introductionTextEdit->setObjectName(QStringLiteral("introductionTextEdit"));

        horizontalLayout_5->addWidget(introductionTextEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        confirmPushButton = new QPushButton(AddBook);
        confirmPushButton->setObjectName(QStringLiteral("confirmPushButton"));

        horizontalLayout_6->addWidget(confirmPushButton);

        cancelPushButton = new QPushButton(AddBook);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout_6->addWidget(cancelPushButton);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout);


        retranslateUi(AddBook);

        QMetaObject::connectSlotsByName(AddBook);
    } // setupUi

    void retranslateUi(QWidget *AddBook)
    {
        AddBook->setWindowTitle(QApplication::translate("AddBook", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("AddBook", "\344\271\246\347\261\215\347\274\226\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddBook", "\344\271\246\347\261\215\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddBook", "\344\271\246\347\261\215\344\275\234\350\200\205\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddBook", "\344\271\246\347\261\215\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("AddBook", "\344\271\246\347\261\215\344\273\213\347\273\215\357\274\232", Q_NULLPTR));
        confirmPushButton->setText(QApplication::translate("AddBook", "\347\241\256\345\256\232", Q_NULLPTR));
        cancelPushButton->setText(QApplication::translate("AddBook", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddBook: public Ui_AddBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_H
