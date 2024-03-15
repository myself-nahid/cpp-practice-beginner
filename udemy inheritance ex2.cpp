#include<iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;
public:
   /*Rectangle (int l=0,int b=0)
   {
       length=l;
       breadth=b;
   }*/
   int getlength()
   {
       return length;
   }
   int getbreadth()
   {
       return breadth;
   }
    int setlength(int l)
   {
       length=l;
   }
   int setbreadth(int b)
   {
       breadth=b;
   }
   int area()
   {
       return length*breadth;
   }
};

class Cuboid:public Rectangle
{
private:
    int height;
public:
    Cuboid (int l=0,int b=0,int h=0)
    {
        height=h;
        setlength(l);
        setbreadth(b);
    }
    int getheight()
   {
       return height;
   }
    int setheight(int l)
   {
       height=l;
   }
   int volume()
   {
       return getlength()*getbreadth()*height;
   }
};
int main()
{
    Rectangle r;
    r.setlength(10);
    r.setbreadth(5);
    cout<<r.area()<<endl;
    Cuboid c;
    c.setheight(5);
    c.setlength(10);
    c.setbreadth(15);
    cout<<c.volume();

    return 0;
}
