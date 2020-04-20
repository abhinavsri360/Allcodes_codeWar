#include<iostream>
using namespace std;

int solve(string a,string b,int len){
	int k=0,l=0;
	if(a.compare(b)==0)
		return 0;
	for(int i=0;i<len;i++)
	{
		if(a[i]!=b[i])
			l++;
		
	}
}

int main()
{
	string a,b;
	int t;
	while(t--)
	{
		cin>>a>>b;
		solve(a,b,a.length());
	}
	return 0;
}