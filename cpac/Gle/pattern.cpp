#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
	int n,t;
	cin>>t;
	t++;
	for(int i=1;i<t;i++)
	{
		int left=0,right=0;
		cin>>n;
		string s,l,r,sub="*";
		bool flag=true;
		for(int j=0;j<n;j++)
		{
			cin>>s;
			if(s.find('*')==s.length()-1)
				right++;
			else if(s.find('*')==0)
				left++;
			l=s.substr(0,s.length()-1);
			r=s.substr(s.find('*')+1,s.length()-1);
			if(right && l.length()>sub.length())
				sub=l;
			if(left && r.length()>sub.length())
				sub=r;
		}
		if(flag)
			cout<<"Case #"<<i<<": "<<sub<<endl;
		else
			cout<<"Case #"<<i<<": *"<<endl;
	}
}
/*
2
5
*CONUTS
*COCONUTS
*OCONUTS
*CONUTS
*S
2
*XZ
*XYZ
*/