#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,sum=0;
	bool f=true;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
		{cin>>a[i];sum+=a[i];}
	sort(a,a+n,greater<int>());
	sum/=(4*m);
	for(int i=0;i<m;i++)
		if(a[i]<sum)
			f=false;
	if(f)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}