#include<iostream>

using namespace std;

class student
{
   public:
       int id;
       double gpa;
       void display()
       {
           cout<<"id="<<id<<endl<<"gpa="<<gpa<<endl;
       }


};

int main()
{
    student A;
    A. id=1;
    A. gpa=3.5;
    A. display();


}

