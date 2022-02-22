#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QLockFile>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo()<<"Attempting to lock a file...";
    QString path = QDir::currentPath() + "/" +"test.txt";
    QFile file(path);
    QLockFile lock(file.fileName() + "l");
    lock.setStaleLockTime(3000);//

    if(lock.tryLock()){
        qInfo()<<"Putting into file...";
        if(file.open(QIODevice::WriteOnly)){
            QByteArray data;
            data.append("Hello World");
            file.write(data);
            file.close();
            qInfo()<<"Finished...";
        }
        qInfo()<<"Unlock";
        lock.unlock();
    }else{
        qInfo()<<"Could not lock the file!";
         qint64 pid;
         QString host;
         QString application;

         if(lock.getLockInfo(&pid,&host,&application)){
             qInfo()<<"the file is locked by: ";
             qInfo()<<"Pid: "<<pid;
             qInfo()<<"Host: "<<host;
             qInfo()<<"Application: "<<application;
         }else{
             qInfo()<<"file is locked, we cannot get the info";
         }
    }

    return a.exec();
}
