#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void fun(int x=5)
    {
        cout<<"Base ::fun(), x="<<x<<endl;
    }
};
class Derived:public Base
    {
    public:
        virtual void fun(int x=0)
         {
             cout<<"Derived::fun(),x="<<x<<endl;
        }
    };

int main()
{
    Base *ptr=new Derived;
    ptr->fun();

    return 0;
}
