#include <iostream>

using namespace std;


class student
{
public:
    char name [30];
    int age;
    char gender[20];
    float marks;

    void getinput()
    {
        cout<<"Enter name,age,gender and marks : ";
        cin>>name>>age>>gender>>marks;

    }
    void show()
    {
        cout<<"NAME IS : "<<name<<endl<<"Age : "<<age<<endl<<"Gender : " <<gender<<endl<<"Marks : "<<marks<<endl;

    }

};
class student1: public student
{
    int percentage;

    int Per()
    {
        percentage=marks*(0.4);
        cout<<"percentage = " <<percentage <<endl;

    }
};

int main()
{
    student1 m;
    m.getinput();
    m.show();
    m.Per();
}
