#include<bits/stdc++.h>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define ll long long int

void solve()
{
	int time=0,p,a[5];
	for(int i=0;i<5;i++)
		cin>>a[i];
	cin>>p;
	for(int i=0;i<5;i++)
	{
		time+=a[i]*p;
	}
	if(time>120)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}

int main()
{
	abhinav;
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}