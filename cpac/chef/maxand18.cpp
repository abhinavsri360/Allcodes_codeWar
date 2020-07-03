#include<bits/stdc++.h>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define ll long long int

ll bitcount(ll n){
    ll count = 0;
    while (n > 0){
        count += 1;
        n = n & (n-1);
    }
    return count;
}

void solve(){
	ll n,k,b=0,max=0;
	cin>>n>>k;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(ll i=a[0];i<a[n-1];i++){
		if(bitcount(i)==k){
			for(ll j=0;j<n;j++){
				b+=i&a[j];
			}
			if(b>max)
				max=i;
			b=0;
		}
	}
	cout<<max<<endl;
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