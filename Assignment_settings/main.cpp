#include <QCoreApplication>
#include <QSettings>


void save(QSettings &settings, QString name,QString l_name){
    settings.setValue(name,l_name);
}

void get(QSettings &settings, QString name){
    qInfo()<<name<<" "<<settings.value(name).toString();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QCoreApplication::setApplicationName("Ugo");
    QCoreApplication::setOrganizationName("Nwankiti");
    QSettings settings(QCoreApplication::applicationName(),QCoreApplication::organizationName());
    QString name {"ugo"}, l_name{"NWankiti"};

    save(settings,name, l_name);
    get(settings,name);


    return a.exec();
}
