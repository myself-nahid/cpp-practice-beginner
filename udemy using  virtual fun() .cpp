#include<iostream>
using namespace std;

class Base
{
public:
    virtual fun()
    {
        cout<<"fun of Base";
    }
};

class Derived:public Base
{
public:
    fun()
    {
        cout<<"fun of Derived";
    }
};

int main()
{
    Base *p=new Derived();
    p->fun();

    return 0;
}
