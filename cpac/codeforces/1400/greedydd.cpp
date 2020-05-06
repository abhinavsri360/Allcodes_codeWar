#include<iostream>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define ll long long int

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll max=0,sum=0;
		ll n,k;
		cin>>n>>k;
		ll a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		for(ll i=0;i<n;i++)
		{
			for(ll j=i;j<i+k;j++)
				sum+=(j<n)?a[j]:a[j-n];
			if(sum>max)
				max=sum;
			sum=0;
		}
		cout<<max<<endl;
	}
}