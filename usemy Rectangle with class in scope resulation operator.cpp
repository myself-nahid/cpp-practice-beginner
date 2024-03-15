#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int l,int b)                      //parameterized constructor
    {
         length=l;
         breadth=b;
    }
    area()
    {
        return length*breadth;
    }
    perimeter();
};

int Rectangle :: perimeter()
{
    return 2*(length+breadth);
}

int main()
{
    Rectangle r(10,5);
    cout<<r.area();
    cout<<r.perimeter();

    return 0;
}
