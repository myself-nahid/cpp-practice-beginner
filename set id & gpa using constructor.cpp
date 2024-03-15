#include<iostream>
using namespace std;

class Student
{
public:
    int id;
    double gpa;
    void display ()
    {
        cout<<id<<"  "<<gpa<<endl;
    }
    Student(int x , double y)
    {
        id=x;
        gpa=y;
    }
};

int main()
{
    Student nahid(101,3.50);
    nahid.display();
    Student mishuk(102,3.75);
    mishuk.display();
    return 0;
}
