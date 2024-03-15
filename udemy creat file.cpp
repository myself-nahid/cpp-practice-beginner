#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream ofs("My.Text");

    ofs<<"Nahid Hasan"<<endl;
    ofs<<21<<endl;
    ofs.close();
}
