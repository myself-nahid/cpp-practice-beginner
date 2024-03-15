#include<iostream>

using namespace std;

class MyClass                 //The class
{
public:                           //Access specifier
    int myNum;               //Attribute(int variable)
    string myString;        //Attribute(string variable)
};

int main ()
{
    MyClass myObj;          //create and Object of my class

    myObj.myNum=15;                     //set value
    myObj.myString="Some text";

    cout<<myObj.myNum<<endl;
    cout<<myObj.myString<<endl;
}
