#include<iostream>
using namespace std;

int main()
{
	int c=0,a,b;
	cin>>a>>b;
	while(a<=b)
	{
		a*=3;
		b*=2;
		c++;
	}
	cout<<c<<endl;
	return 0;
}