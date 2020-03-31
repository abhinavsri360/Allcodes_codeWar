#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
	int n,m;
	cin>>n;
	m=n;
	long long a[n];
	long long max=INT_MIN,p=0;
	while(n--)
		cin>>a[n];
	sort(a,a+m,greater<long long>());
	for(int i=0;i<m;i++)
	{
		a[i]=a[i]*(i+1);
		if(a[i]>max)
			max=a[i];
	}
	cout<<max<<endl;
	return 0;
}