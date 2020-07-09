#include<bits/stdc++.h>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define ll long int

void solve(){
    ll n,u,sum=0;
    bool stop = false;
    cin >> n;
    vector<ll> a,b;
    map<ll,ll> c;
    map<ll,ll> corr;
    ll mi = INT_MAX;
    for(ll i=0; i<n; i++){
        cin >> u;
        a.push_back(u);
        c[a[i]]++;
        mi = min(mi, a[i]);
    }
    for(ll i=0; i<n; i++){
        cin >> u;
        b.push_back(u);
        c[b[i]]++;
        mi = min(mi, b[i]);
    }
    
    
    for(auto it=c.begin(); it!=c.end(); it++){
        if(it->second % 2 == 1){
            stop = true;
            break;
        }else{
            corr[it->first] = it->second/2;
        }
    }
    if(stop){
        cout<<"-1"<<endl;
        return;
    }
    map<ll,ll> copy = corr;
    vector<ll> s1,s2;
    for(ll i=0; i<n; i++){
        if(copy[a[i]])
            copy[a[i]]--;
        else
            s1.push_back(a[i]);
    }

    copy = corr;
    for(ll i=0; i<n; i++){
        if(copy[b[i]])
            copy[b[i]]--;
        else
            s2.push_back(b[i]);
    }

    if(s1.size() == 0){
        cout<<"0"<<endl;
        return;
    }

    if(s1.size() != s2.size()){
        cout<<"-1"<<endl;
        return;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    for(ll i=0; i<s1.size(); i++){
        sum += min(2*mi, min(s1[i],s2[i]));
    }
    cout<<sum<<endl;
}

int main()
{
	abhinav;
	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
