#include<bits/stdc++.h>
using namespace std;

class shape
{
protected:
    float width,height;
    public:
        void set_data(float a,float b)
    {
        width=a;
        height=b;
    }
};
class rectangle:public shape
{
    public:
    float area()
    {
        return(width*height);
    }
};
class triangle:public shape
{
    public:
    float area()
    {
        return(width*height/2);
    }
};
int main ()
{
    rectangle rect;
    triangle tri;
    rect.set_data(5,3);
    tri.set_data(2,5);

    cout<<rect.area()<<endl;
    cout<<tri.area()<<endl;
    return 0;
}
