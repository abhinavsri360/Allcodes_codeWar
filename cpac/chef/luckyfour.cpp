#include<iostream>
using namespace std;

int four(int n)
{
	int c=0;
	while(n!=0)
	{
		if(n%10==4)
			c++;
		n=n/10;
	}
	return c;
}

int main()
{
	int t,n;
	cin>>t;
	while(t--!=0)
	{
		cin>>n;
		cout<<four(n)<<endl;
	}
	return 0;
}