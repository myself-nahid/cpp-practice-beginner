#include<iostream>

using namespace std;

class student
{
    char name[30];
    int id;

};

void marks marks : public student
{
    public:
        int Attmarks;
        int Midterm;
        int performance;
        int Final;

        void get_input()


};
void marks :: get_input()
 {
            cin>>Attmarks>>Midterm>>Performance>>Final;
}
class totalmarks:public marks
{
public:
    int x;
    void total ();
    void grade();
    void print();
};
void totalmarks::print()
{
    cout<<name<<endl;
     cout<<id<<endl;
      cout<<Attmarks<<endl;
       cout<<Midterm<<endl;
        cout<<Performance<<endl;
         cout<<Final<<endl;
}
void totalmarks::total()
{

}

int main ()
{


    return 0;
}

