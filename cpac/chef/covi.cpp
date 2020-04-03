#include<bits/stdc++.h>
using namespace std;

string fol(int a[],int n)
{
	int p;
	for(int i=0;i<n;i++)
		if(a[i]==1)
			{p=i;break;}
	for(int i=p+1;i<n;i++)
	{
		if(a[i]==1 && i-p<6)
			return "NO";
		else if(a[i]==1)
			p=i;
	}
	return "YES";
}

int main()
{
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<fol(a,n)<<endl;
	}
	return 0;
}