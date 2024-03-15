#include<bits/stdc++.h>

using namespace std;

class Animal
{
public:
    string color;
    int legs;
    string foods;

    void display()
    {
        cout<<color<<endl;
    }
};
class Dog:public Animal
{public:

    bool ferecious;
    void setcolor(string c1)
    {
        color=c1;
    }

    };
class cat:public Animal
{public:

    int climb;

    };
    int main()
    {
        Dog dog1;
        dog1.setcolor("Black");
        dog1.display();
    }
