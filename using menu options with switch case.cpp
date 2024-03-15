#include<iostream>
using namespace std;

int main()
{
    cout<<"Menu"<<endl;
    cout<<"1. ADD\n"<<"2. SUB\n"<<"3. MUL\n"<<"4. DIVI\n";

    int option;
    cout<<"Enter your option : "<<endl;
    cin>>option;
    int a,b,c;
    cout<<"Enter two number : "<<endl;
    cin>>a>>b;

    switch(option)
    {
        case 1 : c=a+b;
        break;
        case 2 : c=a-b;
        break;
        case 3 : c=a*b;
        break;
        case 4 : c=a/b;
        break;
    }
    cout<<"Result is "<<c<<endl;
    return 0;
}
