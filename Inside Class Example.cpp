#include<iostream>

using namespace std;

class MyClass{                      //The Class
public:                                   //access Specifier
    void myMethod(){            //Inside the defined Method
    cout<<"Hello World!";
    }
};
int main()
{
    MyClass myObj;
    myObj.myMethod();       //Call the Method
    return 0;
}
