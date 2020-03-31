#include<iostream>
using namespace std;

int five(int n)
{
	int f=0,i=5;
	while(1)
	{
		if(n/i)
			f+=n/i;
		else
			break;
		i*=5;
	}
	return f;
}

int main()
{
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<five(n)<<endl;
	}
	return 0;
}