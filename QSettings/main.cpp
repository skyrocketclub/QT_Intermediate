#include <QCoreApplication>
#include <QDebug>
#include <QSettings>

//
void info(QSettings &settings){
    qInfo()<<"File:"<<settings.fileName();
    qInfo()<<"Keys:"<<settings.allKeys();
}

//to save you need key and value
void save(QSettings &settings){
    settings.setValue("test",123); //setting value needs key value pair
    qInfo()<<settings.status();//looking for error
    qInfo()<<"Saved";
}

void load(QSettings &settings){
    info(settings);//
    qInfo()<<settings.value("test").toString();//A getter, the datatype of the value is important to define

    qInfo()<<settings.value("test").toInt();
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Console Apps use QCoreApplication
    QCoreApplication::setOrganizationName("voidrealm");
    QCoreApplication::setOrganizationDomain("Voildrealm.com");
    QCoreApplication::setApplicationName("Tester"); //You are setiing the application name in your settings

    QSettings settings(QCoreApplication::organizationName(),QCoreApplication::applicationName());

    if(settings.allKeys().length() == 0){ //if keys are 0, it has not been saved
        qInfo()<<"No Setting";
        save(settings);
    }
    else{
        qInfo()<<"Loading the settings...";
        load (settings);
    }
    return a.exec();
}
