#include<iostream>
using namespace std;

int poly(char s)
{
	if(s=='T')
		return 4;
	if(s=='C')
		return 6;
	if(s=='O')
		return 8;
	if(s=='D')
		return 12;
	if(s=='I')
		return 20;
}

int main()
{
	int n,face=0;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		face+=poly(s[0]);
	}
	cout<<face<<endl;
	return 0;
}