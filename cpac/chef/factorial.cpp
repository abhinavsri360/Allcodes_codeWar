#include<iostream>
using namespace std;

int two(int n,int f)
{
	int t=0;
	while(n)
	{
		if(f<=t)
			return t;
		if(n%2)
			break;
		else
			{t++;n/=2;}
	}
	return t;
}

int five(int n)
{
	int f=0;
	while(n)
	{
		if(n%5)
			break;
		else
			{f++;n/=5;}
	}
	return f;
}

int zero(int n)
{
	int f=0;
	int t=0;
	int z=0;
	while(n--)
	{
		f+=five(n);
		t+=two(n,f);
	}
	if(f<=t)
		return f;
	while(f!=0 && t!=0)
	{
		z++;
		f--;
		t--;
	}
	return z;
}

int main()
{
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<zero(n)<<endl;
	}
	return 0;
}