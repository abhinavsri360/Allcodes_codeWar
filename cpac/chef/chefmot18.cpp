#include<bits/stdc++.h>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define ll long long int

void solve(){
	ll s,n,c=0;
	cin>>s>>n;
	while(s)
	{
		if(s<n){
			if(s==1){
				s=0;c++;
				break;
			}
			else if(s%2!=0){
				s-=(s-1);
				c++;
			}
			else {
				s-=s;
				c++;
			}
		}
		else{
			c+=s/n;
			s%=n;
		}
	}
	cout<<c<<endl;
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