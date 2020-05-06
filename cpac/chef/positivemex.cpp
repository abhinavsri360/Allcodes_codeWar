#include <bits/stdc++.h>
using namespace std;

#define neerajksharma ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define ll long long int
#define mod(a) a%998244353

ll sum=0;

void allPossibleSubset(ll arr[],ll n)
{
	ll m=1;
	ll  count = pow(2,n);
	for (ll i = 0; i < count; i++)
	{
		for (ll j = 0; j < n; j++)
			if ((i & (1 << j)) > 0)
				if(arr[j]==m)
					m++;
		sum+=m;
		m=1;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin >> n;
		ll arr[n];
		for(ll i=0;i<n;i++)
			cin >> arr[i];
		sort(arr,arr+n);
		allPossibleSubset(arr,n);
		cout<<mod(sum)<<endl;
		sum=0;
	}
	
	return 0;
}