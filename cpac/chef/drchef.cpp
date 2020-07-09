#include<bits/stdc++.h>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define ll long long int

void solve(){
    ll n,x,d=0;
    cin>>n>>x;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a + n);
    auto lower = lower_bound(a, a + n, x);
    ll b[n];
    ll i = 0;
    for (int j = lower - a; j < n; ++j) {
        b[i] = a[j];
        i++;
    }
    for (int k = 0; k < lower - a; ++k) {
        b[i] = a[k];
        i++;
    }

    for (int i = 0; i < n; ++i) {
        while (x < b[i]) {
            d++;
            x = x * 2;
        }
        if (x >= b[i]) {
            d++;
            x = b[i];
            x = x * 2;
        }
    }
    cout<<d<<endl;
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
