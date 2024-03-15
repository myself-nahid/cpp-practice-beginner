#include<iostream>
using namespace std;

int main()
{
    float billamount;
    float discount=0.0;

    cout<<"Enter bill amount : "<<endl;
    cin>>billamount;

     if(billamount>=500)
     {
         discount=billamount*20/100;
     }

     else if(billamount>=100 && billamount<500)
     {
         discount=billamount*10/100;
     }

          cout<<"Bill Amount = "<<billamount<<endl;
          cout<<"Discount = "<<discount<<endl;
          cout<<"Discount Amount "<<billamount-discount<<endl;

}
