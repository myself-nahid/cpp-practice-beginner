#include<iostream>
using namespace std;

class Employe
{
private:
    int salary;
public:
    void setsalary(int s)
    {
        salary=s;
    }
    int getsalary()
    {
        return salary;
    }
};

int main()
{
    Employe myObj;
    myObj.setsalary(50000);
    cout<<myObj.getsalary()<<endl;
}
