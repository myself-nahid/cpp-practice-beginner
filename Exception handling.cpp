#include<iostream>
using namespace std;

int main()
{
  while(1)
  {
    try{
    int num1,num2;

    cout<<"Enter 1st number: ";
    cin>>num1;

    cout<<"Enter 2nd number: ";
    cin>>num2;

    if(num2==0){
        throw -1;
    }

    double result=(double)num1/num2;

    cout<<"Result: "<<result<<endl;
   }
   catch(...){
   cout<<"Divided by zero is not possible."<<endl;
   cout<<"please try again."<<endl;
   }
  }

}
