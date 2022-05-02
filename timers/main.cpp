#include <QCoreApplication>
#include <QTimer>

void test(){
    qInfo()<<"Thank you for waiting!";
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo()<<"Please wait...";
    QTimer::singleShot(5000,&test); //I would do this one time, I will call the test function after 5 seconds but just one time
    //This is a simple example of multi threading... A very simple example...

    return a.exec();
}
