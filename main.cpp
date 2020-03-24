#include <iostream>
#include <QtWidgets/QApplication>
#include "PoundsToKilogramsConverter.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    auto *pound_dialog = new PoundsToKilogramsConverter();
    pound_dialog->setupUi();
    pound_dialog->show();
    return QApplication::exec();
}
