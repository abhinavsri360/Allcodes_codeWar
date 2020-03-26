#include<iostream>
using namespace std;

int pretty(int a,int b)
{
	int f=0;
	for(int i=a;i<=b;i++)
	{
		if(i%10==2||i%10==3||i%10==9)
			f++;
	}
	return f;
}

int main()
{
	int a,b,t;
	cin>>t;
	while(t--!=0)
	{
		cin>>a>>b;
		cout<<pretty(a,b)<<endl;
	}
	return 0;
}