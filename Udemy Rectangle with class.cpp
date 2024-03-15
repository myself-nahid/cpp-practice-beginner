#include<iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breath;

    int area()
    {
        return length*breath;
    }
    int perimeter()
    {
        return 2*(length+breath);
    }
};

int main()
{
    Rectangle r1;
    r1.length=10;
    r1.breath=5;
    cout<<r1.area()<<endl;
    cout<<r1.perimeter();
}
