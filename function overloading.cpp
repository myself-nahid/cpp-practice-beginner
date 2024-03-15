#include<iostream>

using namespace std;

void addition (int x,int y)
{
    int sum = x+y;
    cout<<sum<<endl;
}
void addition (int x,int y,int z)
{
    int sum = x+y+z;
    cout<<sum<<endl;
}


int main()
{
    addition (10,20);
     addition (10,20,30);
}
