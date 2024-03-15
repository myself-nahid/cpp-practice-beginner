#include<iostream>
using namespace std;

class base
{
private:
    int  r;
friend class child;
};
class child:public base
{
public:
    float area;
    float getarea()
    {
        cin>>r;
        return 3.1416*r*r;
    }
};

int main()
{
    base b;
    child a;
    cout<<a.getarea();
    return 0;
}
