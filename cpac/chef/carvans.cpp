#include<bits/stdc++.h>
using namespace std;

int car(int n)
{
	int b,a=INT_MAX,s=0;
	for(int i=0;i<n;i++)
	{
		cin>>b;
		if(b<=a)
		{
			s++;
			a=b;
		}
	}
	return s;
}

int main()
{
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<car(n)<<endl;
	}
	return 0;
}