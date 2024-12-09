#include <iostream>
#include <QCoreApplication>
#include "exampleclass.h"

using namespace std;

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    ExampleClass example;
    example.startToWait();

    return app.exec();
}
