#include<iostream>

using namespace std;

int main()
{
    int year;
    cout<<"enter year : ";
    cin>>year;

    if (year%4==0 && year%100!=0)
    {
        cout<<"Leap year ";
    }
    else if (year%400==0 )
    {
        cout<<"Leap year ";
    }
    else
    {
        cout<<"NOt Leap year";
    }

}
