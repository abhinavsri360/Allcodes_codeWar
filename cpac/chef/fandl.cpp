#include<iostream>
using namespace std;

int sum(int n)
{
	int s=n%10;
	while((n/10)!=0)
	{
		n=n/10;
	}
	return s+n;
}

int main()
{
	int n,t;
	cin>>t;
	while(t--!=0)
	{
		cin>>n;
		cout<<sum(n)<<endl;
	}
	return 0;
}