#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,i,m;
    cin>>n;
    vector<int> v;
    for(i=0;i<n;i++)
    {
        cin>>m;
        v.push_back(m);
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
