#include <QCoreApplication>
#include <QDebug>
#include <QList>


QList<int> makelist(){
    QList<int> list{};
    for (int i{0}; i<10; i++){
        list.append(i);
    }
    return list;
}

int find_pos(QList<int> &list,int pos){
    int position;
    for(int i{0}; i<list.size(); i++){
       if (pos == list.at(i)){
           position = i;
       }
    }
    return position;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int>mylist = makelist();
    for(auto c:mylist){
        qInfo()<<c<<",";
    }
    qInfo()<<find_pos(mylist,8);
    return a.exec();
}
