#include<iostream>

using namespace std;

class Car
{
public:
    int speed(int maxSpeed);
};
int Car::speed(int maxSpeed)
{
    return maxSpeed;
}
int main()
{
    Car Obj;
    cout<<Obj.speed(200);
}

