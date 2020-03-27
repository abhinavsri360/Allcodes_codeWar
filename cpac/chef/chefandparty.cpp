#include<bits/stdc++.h>
using namespace std;

int count(int a[],int n)
{
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<=flag)
			flag++;
	}
	return flag;
}

int main()
{
	int n,t;
	cin>>t;
	while(t--!=0)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<count(a,n)<<endl;
	}
	return 0;
}