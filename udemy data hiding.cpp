#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    int setlength(int l)
    {
        if(l<0)
            length =1;
       else
            length=l;
    }
    int setbreadth(int b)
    {
        if(b<0)
            breadth =1;
       else
            breadth=b;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }

    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    Rectangle r1;
    r1.setlength(-10);
    r1.setbreadth(5);
    cout<<r1.area()<<endl;
    cout<<r1.getlength()<<endl;
    cout<<r1.perimeter();

    return 0;
}
