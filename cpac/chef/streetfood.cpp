#include<bits/stdc++.h>
#include<math.h>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"

int main()
{
	int s,v,p,n,t,max=INT_MIN;
	cin>>t;
	while(t--)
	{
		cin>>n;
		while(n--)
		{
			cin>>s>>p>>v;
			p=floor(p/(s+1));
			max=(p*v>max)?p*v:max;
		}
		cout<<max<<endl;
		max=INT_MIN;
	}
	return 0;
}