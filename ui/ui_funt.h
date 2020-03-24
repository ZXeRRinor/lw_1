/********************************************************************************
** Form generated from reading UI file 'funtHDkhyG.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef FUNTHDKHYG_H
#define FUNTHDKHYG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *programName;
    QTextEdit *input;
    QLabel *inputDescription;
    QLabel *output;
    QPushButton *recountButton;
    QPushButton *exitButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(639, 520);
        programName = new QLabel(Dialog);
        programName->setObjectName(QString::fromUtf8("programName"));
        programName->setGeometry(QRect(190, 20, 261, 51));
        programName->setAlignment(Qt::AlignCenter);
        input = new QTextEdit(Dialog);
        input->setObjectName(QString::fromUtf8("input"));
        input->setGeometry(QRect(200, 160, 241, 131));
        inputDescription = new QLabel(Dialog);
        inputDescription->setObjectName(QString::fromUtf8("inputDescription"));
        inputDescription->setGeometry(QRect(250, 110, 141, 41));
        inputDescription->setAlignment(Qt::AlignCenter);
        output = new QLabel(Dialog);
        output->setObjectName(QString::fromUtf8("output"));
        output->setGeometry(QRect(200, 330, 241, 81));
        recountButton = new QPushButton(Dialog);
        recountButton->setObjectName(QString::fromUtf8("recountButton"));
        recountButton->setGeometry(QRect(60, 430, 101, 34));
        exitButton = new QPushButton(Dialog);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(470, 430, 88, 34));

        retranslateUi(Dialog);
        QObject::connect(exitButton, SIGNAL(clicked()), Dialog, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "_", nullptr));
        programName->setText(QCoreApplication::translate("Dialog", "\320\237\320\265\321\200\320\265\321\201\321\207\321\221\321\202 \320\262\320\265\321\201\320\260 \320\270\320\267 \321\204\321\203\320\275\321\202\320\276\320\262 \320\262 \320\272\320\270\320\273\320\276\320\263\321\200\320\260\320\274\320\274\321\213", nullptr));
        inputDescription->setText(QCoreApplication::translate("Dialog", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\265\321\201 \320\262 \321\204\321\203\320\275\321\202\320\260\321\205", nullptr));
        output->setText(QString());
        recountButton->setText(QCoreApplication::translate("Dialog", "\320\237\320\265\321\200\320\265\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        exitButton->setText(QCoreApplication::translate("Dialog", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // FUNTHDKHYG_H
