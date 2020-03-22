#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int j,n,i,m,q,a;
    cin>>n;
    vector<int> v;
    vector<int>::iterator b;
    i=n;
    while(i!=0)
    {
        cin>>m;
        v.push_back(m);
        i--;
    }
    cin>>q;
    while(q!=0)
    {
        cin>>a;
        for(j=0;j<n;j++)
        {
            if(v[j]==a)
                break;
        }
        if(j<=n-1)
            cout<<"Yes "<<j+1<<endl;
        else
        {
            b=lower_bound (v.begin(),v.end(), a);
            cout<<"No "<<(b-v.begin()+1)<<endl;
        }
        q--;
    }
    return 0;
}
