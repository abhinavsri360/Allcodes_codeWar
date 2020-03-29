#include<iostream>
using namespace std;

int tri(int a)
{
	int tri=0,r=1;
	while(a>=0)
	{
		if(a-r>=0)
		{
			tri++;
			a-=r;
			r++;
		}
		else
			a-=r;
	}
	return tri;
}

int main()
{
	int a,t;
	cin>>t;
	while(t--!=0)
	{
		cin>>a;
		cout<<tri(a)<<endl;
	}
	return 0;
}