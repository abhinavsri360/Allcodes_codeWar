#include<bits/stdc++.h>
using namespace std;

long profit(long a[],int n)
{
	const unsigned long M = 1000000007;
	long t=0,p=0;
	for(int  i=0;i<n;i++)
	{
		p += (a[i]-t < 0) ? 0 : (a[i]-t);
		t++;
	}
	return p%M;
}

int main()
{
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a, a+n, greater<long>());
		cout<<profit(a,n)<<endl;
	}
	return 0;
}