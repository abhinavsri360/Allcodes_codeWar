#include<bits/stdc++.h>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define ll long long int

ll convert(ll x){
	ll sum=0;
	while(x!=0){
		sum+=x%10;
		x/=10;
	}
	return sum;
}

void solve(){
	ll n,a,b,chef=0,morty=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(a>9)
			a=convert(a);
		if(b>9)
			b=convert(b);
		if(a>b)
			chef++;
		else if(b>a)
			morty++;
		else{
			chef++;
			morty++;
		}
	}
	if(chef>morty)
		cout<<"0 "<<chef<<endl;
	else if(morty>chef)
		cout<<"1 "<<morty<<endl;
	else
		cout<<"2 "<<chef<<endl;
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