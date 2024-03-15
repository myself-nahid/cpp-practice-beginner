#include <iostream>
using namespace std;

int main() {
string x,y;
cin>>x;
int len=x.length();
for(int i=0;i<len;i++){
	if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'||x[i]=='y'||x[i]=='A'||x[i]=='E'||x[i]=='O'||x[i]=='I'||x[i]=='U'||x[i]=='Y')
		continue;
	else
	{
		y+='.';
		y+=towlower(x[i]);
	}
}
cout<<y;
	return 0;
}
