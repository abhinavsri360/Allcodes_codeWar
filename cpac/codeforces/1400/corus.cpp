#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,q,query;
	cin>>t;
	while(t--)
	{
		cin>>n>>q;
		char c[n];
		int count[26]={0};
		int pending=0;
		for(int i=0;i<n;i++)
		{
			cin>>c[i];
			count[(int)c[i]-97]++;
		}
		while(q--)
		{
			cin>>query;
			for(int i=0;i<26;i++)
			{
				if(count[i]>query)
					pending+=count[i]-query;
			}
			cout<<pending<<endl;
			pending=0;
		}
	}
	return 0;
}