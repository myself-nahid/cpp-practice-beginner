#include<iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"enter any letter  ";
    cin>>ch;

    ch= tolower(ch);

    if(ch == 'a' || ch =='e' || ch =='i' || ch =='o' || ch =='u' )

    {
        cout<<"vowel";
    }

    else
    {
        cout<<"consonent";
    }

}

