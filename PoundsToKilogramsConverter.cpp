#include <charconv>
#include <sstream>
#include "PoundsToKilogramsConverter.h"

void PoundsToKilogramsConverter::setupUi() {
    if (this->objectName().isEmpty())
        this->setObjectName(QString::fromUtf8("PoundsToKilogramsConverter"));
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
    programName->setText(QCoreApplication::translate("this", "Пересчёт веса из фунтов в килограммы", nullptr));
    inputDescription->setText(QCoreApplication::translate("this", "Введите вес в фунтах", nullptr));
    output->setText(QString());
    recountButton->setText(QCoreApplication::translate("this", "Пересчитать", nullptr));
    exitButton->setText(QCoreApplication::translate("this", "Выход", nullptr));
}

void PoundsToKilogramsConverter::recount() {
    auto inputText = input->toPlainText();
    std::string inputAsStdString = inputText.toStdString();
    bool inputIsNumber = true;
    char dots = 0;
    for (char i : inputAsStdString) {
        inputIsNumber = inputIsNumber && (isdigit(i) || (i == ','));
        if (i == '.') dots++;
    }
    inputIsNumber = inputIsNumber && (dots <= 1) && (inputAsStdString.length() > 0);
    std::string outputText;
    if (inputIsNumber) {
        std::ostringstream stringStream;
        stringStream << inputAsStdString << " фунт(а/ов) — это " << std::stof(inputAsStdString) * 0.4059 << " кг";
        outputText = stringStream.str();
    } else {
        outputText = "Введено некорректное значение.";
    }
    output->setText(QString::fromUtf8(outputText.c_str()));
}

void PoundsToKilogramsConverter::quit() {
    this->close();
}

PoundsToKilogramsConverter::PoundsToKilogramsConverter() {

}

