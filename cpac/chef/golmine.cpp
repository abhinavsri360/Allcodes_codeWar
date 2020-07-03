#include<bits/stdc++.h>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define ld long double

void solve(){
	ld n,g,a,b;
	ld chef=0.0,chefu=0.0;
	cin>>n;
	while(n--){
		cin>>g>>a>>b;
		chef+=(a/(a+b))*g;
		chefu+=(b/(a+b))*g;
	}
	cout<<fixed<<setprecision(5)<<chefu<<" "<<chef<<endl;
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