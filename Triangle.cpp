#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    double base,height,area;
    cout<<"enter base : ";
    cin>>base;

    cout<<"enter height : ";
    cin>>height;

    area=(double)1/2*base*height;  //Type casting

    cout<<"area of triangle : "<<area;

    getch ();
}
