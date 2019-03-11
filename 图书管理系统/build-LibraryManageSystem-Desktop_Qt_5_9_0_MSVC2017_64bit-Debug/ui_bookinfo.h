/********************************************************************************
** Form generated from reading UI file 'bookinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKINFO_H
#define UI_BOOKINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookInfo
{
public:
    QLabel *categoryLabel;
    QTextBrowser *introductionTextBrowser;
    QLabel *authorLabel;
    QLabel *nameLabel;

    void setupUi(QWidget *BookInfo)
    {
        if (BookInfo->objectName().isEmpty())
            BookInfo->setObjectName(QStringLiteral("BookInfo"));
        BookInfo->resize(400, 300);
        categoryLabel = new QLabel(BookInfo);
        categoryLabel->setObjectName(QStringLiteral("categoryLabel"));
        categoryLabel->setGeometry(QRect(200, 40, 54, 16));
        introductionTextBrowser = new QTextBrowser(BookInfo);
        introductionTextBrowser->setObjectName(QStringLiteral("introductionTextBrowser"));
        introductionTextBrowser->setGeometry(QRect(10, 66, 381, 231));
        authorLabel = new QLabel(BookInfo);
        authorLabel->setObjectName(QStringLiteral("authorLabel"));
        authorLabel->setGeometry(QRect(90, 40, 54, 16));
        nameLabel = new QLabel(BookInfo);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(150, 10, 45, 16));
        nameLabel->setStyleSheet(QStringLiteral("font: 75 11pt \"Adobe Arabic\";"));

        retranslateUi(BookInfo);

        QMetaObject::connectSlotsByName(BookInfo);
    } // setupUi

    void retranslateUi(QWidget *BookInfo)
    {
        BookInfo->setWindowTitle(QApplication::translate("BookInfo", "Form", Q_NULLPTR));
        categoryLabel->setText(QApplication::translate("BookInfo", "TextLabel", Q_NULLPTR));
        authorLabel->setText(QApplication::translate("BookInfo", "TextLabel", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("BookInfo", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BookInfo: public Ui_BookInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKINFO_H
