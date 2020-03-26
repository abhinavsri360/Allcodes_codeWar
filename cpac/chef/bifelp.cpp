#include<iostream>
using namespace std;

string inv(int a[],int n)
{
	int inv=0,loc=0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
			loc++;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
				inv++;
		}
	}
	if(loc==inv)
		return "YES";
	else
		return "NO";
}

int main()
{
	int t,l;
	cin>>t;
	while(t--!=0)
	{
		cin>>l;
		int a[l];
		for(int i=0;i<l;i++)
			cin>>a[i];
		cout<<inv(a,l)<<endl;
	}
	return 0;
}