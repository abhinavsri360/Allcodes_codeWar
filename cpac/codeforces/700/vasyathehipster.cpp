#include<iostream>
using namespace std;

int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}

int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int main()
{
	int a,b;
	cin>>a>>b;
	int c=min(a,b);
	int d=max(a,b);
	cout<<c<<" "<<(d-c)/2<<endl;
	return 0;
}