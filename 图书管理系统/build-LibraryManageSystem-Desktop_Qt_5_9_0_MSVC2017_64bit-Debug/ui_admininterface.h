/********************************************************************************
** Form generated from reading UI file 'admininterface.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMININTERFACE_H
#define UI_ADMININTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminInterface
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *bookTab;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTreeWidget *bookTreeWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *addBookPushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *deleteBookPushButton;
    QSpacerItem *horizontalSpacer;
    QWidget *userTab;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *userTreeWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *deleteUserPushButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *addUserPushButton;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *AdminInterface)
    {
        if (AdminInterface->objectName().isEmpty())
            AdminInterface->setObjectName(QStringLiteral("AdminInterface"));
        AdminInterface->resize(454, 426);
        verticalLayout_3 = new QVBoxLayout(AdminInterface);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tabWidget = new QTabWidget(AdminInterface);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        bookTab = new QWidget();
        bookTab->setObjectName(QStringLiteral("bookTab"));
        widget = new QWidget(bookTab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(2, 2, 421, 371));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        bookTreeWidget = new QTreeWidget(widget);
        bookTreeWidget->setObjectName(QStringLiteral("bookTreeWidget"));

        verticalLayout->addWidget(bookTreeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_6 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        addBookPushButton = new QPushButton(widget);
        addBookPushButton->setObjectName(QStringLiteral("addBookPushButton"));

        horizontalLayout->addWidget(addBookPushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        deleteBookPushButton = new QPushButton(widget);
        deleteBookPushButton->setObjectName(QStringLiteral("deleteBookPushButton"));

        horizontalLayout->addWidget(deleteBookPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget->addTab(bookTab, QString());
        userTab = new QWidget();
        userTab->setObjectName(QStringLiteral("userTab"));
        widget1 = new QWidget(userTab);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(3, 3, 431, 371));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        userTreeWidget = new QTreeWidget(widget1);
        userTreeWidget->setObjectName(QStringLiteral("userTreeWidget"));

        verticalLayout_2->addWidget(userTreeWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        deleteUserPushButton = new QPushButton(widget1);
        deleteUserPushButton->setObjectName(QStringLiteral("deleteUserPushButton"));

        horizontalLayout_3->addWidget(deleteUserPushButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        addUserPushButton = new QPushButton(widget1);
        addUserPushButton->setObjectName(QStringLiteral("addUserPushButton"));

        horizontalLayout_3->addWidget(addUserPushButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_3);

        tabWidget->addTab(userTab, QString());

        verticalLayout_3->addWidget(tabWidget);


        retranslateUi(AdminInterface);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminInterface);
    } // setupUi

    void retranslateUi(QWidget *AdminInterface)
    {
        AdminInterface->setWindowTitle(QApplication::translate("AdminInterface", "Form", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = bookTreeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("AdminInterface", "\344\271\246\347\261\215\347\261\273\345\236\213", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("AdminInterface", "\344\271\246\347\261\215\344\275\234\350\200\205", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("AdminInterface", "\344\271\246\347\261\215\345\220\215\347\247\260", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("AdminInterface", "\344\271\246\347\261\215\347\274\226\345\217\267", Q_NULLPTR));
        addBookPushButton->setText(QApplication::translate("AdminInterface", "\346\267\273\345\212\240\344\271\246\347\261\215", Q_NULLPTR));
        deleteBookPushButton->setText(QApplication::translate("AdminInterface", "\345\210\240\351\231\244\344\271\246\347\261\215", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(bookTab), QApplication::translate("AdminInterface", "Tab 1", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = userTreeWidget->headerItem();
        ___qtreewidgetitem1->setText(2, QApplication::translate("AdminInterface", "\347\224\250\346\210\267\345\257\206\347\240\201", Q_NULLPTR));
        ___qtreewidgetitem1->setText(1, QApplication::translate("AdminInterface", "\347\224\250\346\210\267\345\247\223\345\220\215", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("AdminInterface", "\347\224\250\346\210\267\347\274\226\345\217\267", Q_NULLPTR));
        deleteUserPushButton->setText(QApplication::translate("AdminInterface", "\345\210\240\351\231\244\347\224\250\346\210\267", Q_NULLPTR));
        addUserPushButton->setText(QApplication::translate("AdminInterface", "\346\267\273\345\212\240\347\224\250\346\210\267", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(userTab), QApplication::translate("AdminInterface", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminInterface: public Ui_AdminInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMININTERFACE_H
