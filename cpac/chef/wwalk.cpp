#include<bits/stdc++.h>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define ll long long int

void solve(){
	ll n,ad=0,bd=0,w=0;
	cin>>n;
	ll a[n];
	ll b[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	for(int i=0;i<n;i++)
	{
		ad+=a[i];
		bd+=b[i];
		if(a[i]==b[i] && ad==bd)
			w+=a[i];
	}
	cout<<w<<endl;
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