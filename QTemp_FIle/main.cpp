#include <QCoreApplication>
#include <QDir>
#include <QDebug>
#include <QTemporaryFile>
#include <QFile>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    QByteArray data;
//    data.append("Hello World");
//    QTemporaryFile file("test.txt");
//    file.open();
//    file.write(data);
//    file.seek(0);
//    file.readAll();
//    file.close();
//   QDir dir = QCoreApplication::applicationDirPath();
//   qInfo()<<dir;

     QString filename = "test.txt";
     QFile file(filename);

     if(file.open(QIODevice::WriteOnly)){
         QByteArray data;
         data.append("Hello World");
         file.write(data);
         file.close();
     }
     if(file.open(QIODevice::ReadOnly)){

        QString n = file.readAll();
        qInfo()<<n;
         file.close();
     }

//     QDir dir =QCoreApplication::applicationFilePath();
//     qInfo()<<dir;

    return a.exec();
}
