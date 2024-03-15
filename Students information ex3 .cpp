#include<iostream>

using namespace std;

class student
{
    public:
        string name,Class,depertment;
        int id;
        double gpa;
};

int main()
{
    student Mishuk;
    Mishuk.name="NAHID HASAN";
    Mishuk.id=101;
    Mishuk.gpa=3.90;
    Mishuk.Class="Bsc";
    Mishuk.depertment="CSE";
    cout<<"NAME       : "<<Mishuk.name<< endl <<"ID         : "<<Mishuk.id<< endl<<"GPA        : " <<Mishuk.gpa<<endl;
    cout<<"CLASS      : "<<Mishuk.Class<<endl<<"DEPERTMENT : "<<Mishuk.depertment<<endl;
    return 0;
}

