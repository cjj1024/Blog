/********************************************************************************
** Form generated from reading UI file 'userinterface.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINTERFACE_H
#define UI_USERINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserInterface
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *borrowPushButton;
    QPushButton *returnPushButton;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *UserInterface)
    {
        if (UserInterface->objectName().isEmpty())
            UserInterface->setObjectName(QStringLiteral("UserInterface"));
        UserInterface->resize(722, 527);
        horizontalLayout_2 = new QHBoxLayout(UserInterface);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        borrowPushButton = new QPushButton(UserInterface);
        borrowPushButton->setObjectName(QStringLiteral("borrowPushButton"));

        verticalLayout->addWidget(borrowPushButton);

        returnPushButton = new QPushButton(UserInterface);
        returnPushButton->setObjectName(QStringLiteral("returnPushButton"));

        verticalLayout->addWidget(returnPushButton);


        horizontalLayout->addLayout(verticalLayout);

        treeWidget = new QTreeWidget(UserInterface);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        horizontalLayout->addWidget(treeWidget);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(UserInterface);

        QMetaObject::connectSlotsByName(UserInterface);
    } // setupUi

    void retranslateUi(QWidget *UserInterface)
    {
        UserInterface->setWindowTitle(QApplication::translate("UserInterface", "Form", Q_NULLPTR));
        borrowPushButton->setText(QApplication::translate("UserInterface", "\345\200\237\344\271\246", Q_NULLPTR));
        returnPushButton->setText(QApplication::translate("UserInterface", "\350\277\230\344\271\246", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("UserInterface", "\345\272\224\350\277\230\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem->setText(4, QApplication::translate("UserInterface", "\345\200\237\351\230\205\346\227\245\346\234\237", Q_NULLPTR));
        ___qtreewidgetitem->setText(3, QApplication::translate("UserInterface", "\345\233\276\344\271\246\347\261\273\345\236\213", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("UserInterface", "\345\233\276\344\271\246\344\275\234\350\200\205", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("UserInterface", "\345\233\276\344\271\246\345\220\215\347\247\260", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("UserInterface", "\345\233\276\344\271\246\347\274\226\345\217\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserInterface: public Ui_UserInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINTERFACE_H
