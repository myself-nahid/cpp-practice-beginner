#include <iostream>
using namespace std;

int main(){
    int num,r,sum=0,temp;
    cout<<"Enter a number : ";
    cin>>num;
    temp=num;
    while (temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    if(sum==num)
    {
        cout<<"palindrome"<<endl;
    }
    else
        cout<<"not palindrome"<<endl;
}
