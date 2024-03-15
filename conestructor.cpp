#include<iostream>

using namespace std;

class Student()
{
private:
    int roll;
    string name;

public:
    int marks;

    void display()
    {
        cout<<roll<<" "<<name<<marks<<endl;
    }

};
int main()
{
    Student st1;
    st1.marks=67;
}

