#include<iostream>
using namespace std;

int main()
{
	int a=0,b=8;
	int a1=1,b1=1;
	while(a/=10)
		a1++;
	while(b/=10)
		b1++;
	if(a1==b1)
		cout<<a1<<" "<<b1<<endl;
	else if(a1>b1)
		cout<<a1<<endl;
	else
		cout<<b1<<endl;
	return 0;
}