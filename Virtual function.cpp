#include<iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout<<"In Base"<<endl;
    }
};
class Derived:public Base
{
    void show()
    {
    cout<<"In Derived"<<endl;

    }
};

int main()
{
    Base *ptr=new Derived;
    //RUN_TIME POLYMORPHISM
    ptr->show();

    return 0;
}
