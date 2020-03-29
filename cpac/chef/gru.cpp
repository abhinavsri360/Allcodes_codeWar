#include<iostream>
using namespace std;

int mut(int a[],int k,int n)
{
	int c=0;
	for(int i=0;i<n;i++)
	{
		if((a[i]+k)%7==0)
			c++;
	}
	return c;
}

int main()
{
	int t,n,k;
	cin>>t;
	while(t--!=0)
	{
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<mut(a,k,n)<<endl;
	}
	return 0;
}