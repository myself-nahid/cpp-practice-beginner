#include<iostream>

using namespace std;

class person
{
    char name[30],dept[20];
    int age;
    double gpa;


    public:
    void getdata(void);
    void display(void);
};

void person :: getdata(void)
{
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter age : ";
    cin>>age;
    cout<<"Enter Dept : ";
    cin>>dept;
    cout<<"Enter Gpa : ";
    cin>>gpa;
}

void person :: display(void)
{
    cout<<endl<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Dept :"<<dept<<endl;
    cout<<"Gpa :"<<gpa<<endl;
}

int main ()
{
    person p;
    p.getdata();
    p.display();

    return 0;
}
