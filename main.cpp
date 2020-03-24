#include <iostream>
#include <ui_funt.h>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Ui_Dialog ui_dialog;
    QDialog pound_dialog;
    ui_dialog.setupUi(&pound_dialog);
    pound_dialog.show();
    pound_dialog;
    return QApplication::exec();
}
