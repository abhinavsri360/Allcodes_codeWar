#include<bits/stdc++.h>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define ll long long int

void solve(){
	ll a,b,n,sum=0;
	cin>>n;
	cin>>a;
	for(int i=1;i<n;i++){
		cin>>b;
		sum+=abs(b-a)-1;
		a=b;
	}
	cout<<sum<<endl;
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
