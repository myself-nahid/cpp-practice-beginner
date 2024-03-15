#include<iostream>

using namespace std;

class overload
{
    public:
    int s;
    void sum(int a,int b,int c)
   {
       s=a+b+c;
    cout<<s<<endl;
   }
   void sum(int a,int b)
   {
       s=a+b;
       cout<<s<<endl;
   }
};

int main()
{
  overload over;
  over.sum(10,15,20);
  over.sum(5,7);


}
