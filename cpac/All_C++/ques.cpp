#include<bits/stdc++.h>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define ll long long int

int main()
{
    abhinav;
    ll n,temp,minea=0,mineb=0;
    cin>>n;
    vector<ll> stops(n+1);
    for(ll i=0;i<n;i++){
        cin>>temp;
        stops.at(i)=temp;
    }
    for(ll i=1;i<n;i+=2){
        minea+=stops[i];
    }
    for(ll i=0;i<n;i+=2){
        mineb+=stops[i];
    }
    if(minea<mineb)
        cout<<minea<<endl;
    else
        cout<<mineb<<endl;
    return 0;
}