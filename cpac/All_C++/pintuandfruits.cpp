#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,s=1;
    int min=INT_MAX;
    cin>>t;
    while(t--!=0)
    {
        cin>>n>>m;
        int f[n];
        int p[n];
        for(int i=0;i<n;i++)
        {
            cin>>f[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }

        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(f[i]==f[j])
                    s+=p[j];
            }
            if(s!=0 && s<min)
                min=s;
            s=0;
        }
        cout<<min;
    }
    return 0;
}
