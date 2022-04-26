#include <QCoreApplication>
#include <QIODevice>
#include <QBuffer>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QBuffer buffer;
    //Like opening a door
    if(buffer.open(QIODevice::OpenModeFlag::ReadWrite))
    {
       qInfo()<<"Device is open";

       QByteArray data("Hello World");
       for(int i=0; i<5; i++){
           buffer.write(data);
           buffer.write("\r\n");
       }
//       buffer.flush();

       buffer.seek(0);
       qInfo()<<buffer.readAll();

       qInfo()<<"Closing buffer....";

       buffer.close();
    }
    else
    {
        qInfo()<<"Could not open the device";
    }

    return a.exec();
}
