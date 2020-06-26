#include<bits/stdc++.h>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n";

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,t,lost=0;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>t;
			if(t>k)
				lost+=(t-k);
		}
		cout<<lost<<endl;
		lost=0;
	}
	return 0;
}