#include<iostream>
using namespace std;

int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}

int main()
{
	string a;
	cin>>a;
	int c=0;
	for(int i=0;i<a.length();i++)
	{
		if(a[i]=='a')
			c++;
	}
	if(c>a.length()/2)
		cout<<a.length()<<endl;
	else
		cout<<min(a.length(),2*c-1)<<endl;
	return 0;
}