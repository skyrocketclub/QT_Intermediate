#include <QCoreApplication>
#include <QSettings>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //a is the QtCoreApplication
    QString filename = a.applicationDirPath() + "/settings.ini";
    qInfo()<<filename;

    QSettings settings(filename,QSettings::Format::IniFormat);
    settings.beginGroup("people");
    settings.setValue("Bryan",46); //for setting, you need name and key
    settings.endGroup();

    settings.sync();
    settings.beginGroup("people");
    qInfo()<<"Tammy:"<<settings.value("Tammy",QVariant("PErson not found"));
    qInfo()<<"Bryan:"<<settings.value("Bryan",QVariant("Person not found"));
    settings.endGroup();

    return a.exec();
}
