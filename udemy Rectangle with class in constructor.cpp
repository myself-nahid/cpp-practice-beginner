#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle()                                     //non-parameterized constructor
    {
        length=1;
        breadth=1;
    }
    Rectangle(int l,int b)                      //parameterized constructor
    {
         length=l;
         breadth=b;
    }
    Rectangle (Rectangle(&rect))        //copy constructor
    {
        length=rect.length;
        breadth=rect.breadth;
    }
    area()
    {
        return length*breadth;
    }
    perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    Rectangle r;
    Rectangle ();
    Rectangle r2(10,5);
    Rectangle r3(r);
    cout<<r.area()<<endl<<r2.area()<<endl<<r3.area()<<endl;
    cout<<r.perimeter()<<endl<<r2.perimeter()<<endl<<r3.perimeter()<<endl;

    return 0;
}
