#include<iostream>
using namespace std;

bool one(long long k,long long n)
{
	if(n<1)
		return false;
	if(n==1)
		return true;
	if(n%k)
		one(k,n-k);
	else
		one(k,n/k);
}

int main()
{
	long long n,c=0;
	bool f;
	cin>>n;
	for(long long i=2;i<n+1;i++)
	{
		f=one(i,n);
		if(f)//314159265358
			c++;
	}
	cout<<c<<endl;
	return 0;
}