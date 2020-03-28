#include<bits/stdc++.h>
using namespace std;

int prefix(string s,int x)
{
	int flag=INT_MAX;
	for(int i=0;i<s.length();i++)
	{
		for(int j=i+1;j<s.length();j++)
		{
			if(s[j]==s[i] && j<flag)
			{
				flag=j;
				break;
			}
		}
	}
	return flag;
}

int prefixlen(string s,int k,int x)
{
	
}

int main()
{
	int t,k,x;
	string s;
	cin>>t;
	while(t--!=0)
	{
		cin>>s;
		cin>>k>>x;
		if(k==0)
			cout<<prefix(s,x)<<endl;
		else
			cout<<prefixlen(s,k,x)<<endl;
	}
	return 0;
}