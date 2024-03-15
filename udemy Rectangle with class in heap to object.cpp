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
    Rectangle *p;
    p=new Rectangle;
    Rectangle *q=new Rectangle();
    p->length=15;
    p->breath=10;
    cout<<p->area()<<endl;
    cout<<p->perimeter();
}
