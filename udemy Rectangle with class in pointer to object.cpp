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
    Rectangle r;
    Rectangle *ptr;
    ptr=&r;
    ptr->length =15;
    ptr->breath=5;
    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter();
}
