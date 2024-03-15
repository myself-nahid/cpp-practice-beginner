#include<iostream>

using namespace std;

class person
{
    char name[30];
    int age;
    public:
    void getdata()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter age : ";
        cin>>age;

    }
    void display ()
    {
       cout<<"\n name"<<name;
       cout<<"\n age"<<age;


    }


};


int main()
{
    person P ;
    P. getdata();
    P. display();
    return 0;

}

