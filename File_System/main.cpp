#include <QCoreApplication>
#include <QIODevice>
#include <QBuffer>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QBuffer buffer;//it provides interface with QIODevice as QByteArray
    //Buffer inherits the QIODevice and that is why we are using it in this case...

    if(buffer.open(QIODevice::OpenModeFlag::ReadWrite)){
        qInfo()<<"Device is open:";
        QByteArray data("Hello world");

        for (int i = 0; i<5; i++){
            buffer.write(data);
            buffer.write("/r/n");
        }

        buffer.seek(0);//place cursor at beginning
        qInfo()<<buffer.readAll();

        qInfo()<<"CLosing buffer...";
        buffer.close();
    }else{
        qInfo()<<"Could not open the device";
    }

    qInfo()<<"FInished";
    return a.exec();
}
