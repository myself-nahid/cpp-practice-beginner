#include<iostream>

using namespace std;

int main()
{
    int num1,num2,num3;
    cout<<"enter 3 numbers :  ";
    cin>>num1>>num2>>num3;

    if(num1>num2 && num1>num3)
    {
        cout<<num1;
    }
    else if(num2>num1 && num2>num3)
    {
        cout<<num2;
    }
    else
    {
        cout<<num3;
    }

}
