#include<iostream>
using namespace std;

int rev(int n)
{
	int m=0;
	while(n)
	{
		m=m*10+n%10;
		n/=10;
	}
	return m;
}

int main()
{
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<rev(n)<<endl;
	}
	return 0;
}