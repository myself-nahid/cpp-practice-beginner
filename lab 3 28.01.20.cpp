#include<iostream>
using namespace std;

class a
{
private:
    float a;
public:
    void getdata(float x)
    {
        a=x;
        a=3.1416*a*a;
    }
    friend void fun1(A);
};
void fun1(A obj)
{
    cout<<"Area is = "<<obj.a<<endl;
}

int main()
{
    a *bc;
    b dc;
    bc=&dc;
    bc->display();
}
