#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,b=0,m;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	m=a[n-1];
	for(int i=0;i<n;i++)
		b+=m-a[i];
	cout<<b<<endl;
	return 0;
}