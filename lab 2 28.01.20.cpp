#include<iostream>
using namespace std;

class base
{
protected:
    int r,b,h;
};
class circle : public base
{
public:
    float area (int a)
    {
        r=a;
        return 3.1416*r*r;
    }
};
class triangle:public base
{
public:
    float area (int x, int y)
    {
        b=x;
        h=y;
        return (0.5*b*h);
    }
};
class rectangle:public base
{
public:
    float area (int x, int y)
    {
        b=x;
        h=y;
        return (b*h);
    }
};
int main()
{
    base b;
    circle a;
    triangle t;
    rectangle c;
    cout<<a.area(5)<<endl;
    cout<<t.area(3,4)<<endl;
    cout<<c.area(3,4)<<endl;
    return 0;
}
