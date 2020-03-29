#include<bits/stdc++.h>
using namespace std;

int max(int a[])
{
	sort(a,a+3);
	return a[1];
}

int main()
{
	int a[2],t;
	cin>>t;
	while(t--!=0)
	{
		cin>>a[0]>>a[1]>>a[2];
		cout<<max(a)<<endl;
	}
	return 0;
}