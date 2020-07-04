#include<bits/stdc++.h>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define ll long int

void solve(){
	ll x,y,n,p,finx,finy;
	map<ll, ll> xco;
	map<ll, ll> yco;
	map<ll, ll>:: iterator itr;
	cin>>n;
	p=4*n-1;
	for(int i=0;i<p;i++){
		cin>>x>>y;
		if(x==0){
			if(xco.find(x)->second){
				xco[x]++;
			}
		}
		else if(xco.find(x)->first){
			xco[x]++;
		}
		else
			xco[x]=1;

		if(y==0){
			if(yco.find(y)->second){
				yco[y]++;
			}
		}
		else if(yco.find(y)->first){
			yco[y]++;
		}
		else
			yco[y]=1;
	}

	for(itr=xco.begin();itr!=xco.end();itr++){
		//cout<<itr->first<<" "<<itr->second<<endl;
		if(itr->second%2 != 0){
			finx=itr->first;
			break;
		}
	}

	for(itr=yco.begin();itr!=yco.end();itr++){
		//cout<<itr->first<<" "<<itr->second<<endl;
		if(itr->second%2!=0){
			finy=itr->first;
			break;
		}
	}

	cout<<finx<<" "<<finy<<endl;
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