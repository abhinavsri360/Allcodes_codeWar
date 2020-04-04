#include<iostream>
using namespace std;

bool isprime(int n)
{
	if(n==2)
		return true;
	bool flag=true;
	for(int i=2;i<=n/2+1;i++)
		if(!(n%i))
			{flag=false;break;}
	return flag;
}

void prime(int n)
{
	for(int i=2;i<=n;i++)
		if(isprime(i))
			cout<<i<<endl;
}

int main()
{
	int n;
	cin>>n;
	prime(n);
	return 0;
}