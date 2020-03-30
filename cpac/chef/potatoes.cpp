#include<iostream>
using namespace std;

bool isprime(int p)
{
	for(int i=2;i<=p/2;i++)
	{
		if(p%i==0)
			return false;
	}
	return true;
}

int main()
{
	int x,y,t,p;
	bool flag=true;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		p=x+y+1;
		while(flag)
		{
			if(isprime(p))
				flag=false;
			else
				p++;
		}
		flag=true;
		cout<<p-x-y<<endl;
	}
}