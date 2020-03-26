#include<iostream>
using namespace std;

int sub(int a[],int l)
{
	if(l==0)
		return 0;
	else{
		int s=0,p=1,f=0;
		for(int i=0;i<l;i++)
		{
			
		}
	}
}

int main()
{
	int l,t;
	cin>>t;
	while(t--!=0)
	{
		cin>>l;
		int a[l];
		for(int i=0;i<l;i++)
		{
			cin>>a[i];
		}
		cout<<sub(a,l-1);
	}
	return 0;
}