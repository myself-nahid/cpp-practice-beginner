#include<iostream>

using namespace std;
class Complex
{
public:
    int a,b;
    Complex (int a1,int b1,int a2,int b2 )
    {
        a=a1+b1;
        b=a2+b2;
        cout<<"c = "<<a<<"+"<<b<<"j";
    }
};

int main()
{
    Complex one (3,5,5,6);
    return 0;
}
