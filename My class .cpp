#include<iostream>

using namespace std;

class student
{
    public:
        string name;
        int id;
        double gpa;
};

int main()
{
    student Mishuk;
    Mishuk.name="Nahid";
    Mishuk.id=101;
    Mishuk.gpa=3.90;
    cout<<"NAME= "<<Mishuk.name<< " " <<"ID = "<<Mishuk.id<< "  " <<"GPA = " <<Mishuk.gpa<<endl;

    return 0;
}
