#include "SoundAround.h"
#include <QtWidgets/QApplication>
#include <qfile.h>
#include <QtWidgets/qmessagebox.h>
#include <QFileDialog>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setWindowIcon(QIcon(":/SoundAround/images/logo-512-2.png"));
    QCoreApplication::setOrganizationName(Helper::ORGANIZATION_NAME);
    QCoreApplication::setOrganizationDomain("Elizgerd@yandex.ru");
    QCoreApplication::setApplicationName(Helper::APPLICATION_NAME);

    if (!QDir(QDir::currentPath() + "/sounds").exists())
        QDir().mkdir(QDir::currentPath() + "/sounds");


    Database::initDatabase();
    if (!Database::checkConnect())
    {
        QMessageBox::critical(0, "Ошибка", "Отсутствует доступ к базе данных");
        return 0;
    }

    Helper::Helper();
    SoundAround soundAround;
    soundAround.setWindowTitle("Sound Around");
    soundAround.show();
    return app.exec();
}
