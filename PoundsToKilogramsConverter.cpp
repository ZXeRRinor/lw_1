#include "PoundsToKilogramsConverter.h"

void PoundsToKilogramsConverter::setupUi() {
    if (this->objectName().isEmpty())
        this->setObjectName(QString::fromUtf8("this"));
    this->resize(639, 520);
    programName = new QLabel(this);
    programName->setObjectName(QString::fromUtf8("programName"));
    programName->setGeometry(QRect(190, 20, 261, 51));
    programName->setAlignment(Qt::AlignCenter);
    input = new QTextEdit(this);
    input->setObjectName(QString::fromUtf8("input"));
    input->setGeometry(QRect(200, 160, 241, 131));
    inputDescription = new QLabel(this);
    inputDescription->setObjectName(QString::fromUtf8("inputDescription"));
    inputDescription->setGeometry(QRect(250, 110, 141, 41));
    inputDescription->setAlignment(Qt::AlignCenter);
    output = new QLabel(this);
    output->setObjectName(QString::fromUtf8("output"));
    output->setGeometry(QRect(200, 330, 241, 81));
    recountButton = new QPushButton(this);
    recountButton->setObjectName(QString::fromUtf8("recountButton"));
    recountButton->setGeometry(QRect(60, 430, 101, 34));
    exitButton = new QPushButton(this);
    exitButton->setObjectName(QString::fromUtf8("exitButton"));
    exitButton->setGeometry(QRect(470, 430, 88, 34));

    QObject::connect(exitButton, SIGNAL(clicked()), this, SLOT(quit()));
    QObject::connect(recountButton, SIGNAL(clicked()), this, SLOT(recount()));

    QMetaObject::connectSlotsByName(this);

    this->setWindowTitle(QCoreApplication::translate("this", "_", nullptr));
    programName->setText(QCoreApplication::translate("this", "\320\237\320\265\321\200\320\265\321\201\321\207\321\221\321\202 \320\262\320\265\321\201\320\260 \320\270\320\267 \321\204\321\203\320\275\321\202\320\276\320\262 \320\262 \320\272\320\270\320\273\320\276\320\263\321\200\320\260\320\274\320\274\321\213", nullptr));
    inputDescription->setText(QCoreApplication::translate("this", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\265\321\201 \320\262 \321\204\321\203\320\275\321\202\320\260\321\205", nullptr));
    output->setText(QString());
    recountButton->setText(QCoreApplication::translate("this", "\320\237\320\265\321\200\320\265\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
    exitButton->setText(QCoreApplication::translate("this", "\320\222\321\213\321\205\320\276\320\264", nullptr));
}

void PoundsToKilogramsConverter::recount() {
    output->setText(QCoreApplication::translate("this", "testOutput", nullptr));
}

void PoundsToKilogramsConverter::quit() {
    this->close();
}

PoundsToKilogramsConverter::PoundsToKilogramsConverter() {

}

