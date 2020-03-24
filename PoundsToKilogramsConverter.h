
#include <QtCore/QArgument>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QLabel>
#include <QtCore/QCoreApplication>

class PoundsToKilogramsConverter : public QWidget {
Q_OBJECT

public:
    PoundsToKilogramsConverter();

    QLabel *programName;
    QTextEdit *input;
    QLabel *inputDescription;
    QLabel *output;
    QPushButton *recountButton;
    QPushButton *exitButton;

    void setupUi();

private slots:
    void recount();
    void quit();
};