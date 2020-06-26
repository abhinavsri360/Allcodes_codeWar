#include<bits/stdc++.h>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define ll long long int

int main()
{
	abhinav;
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int change=0, val;
		string all="YES";
		for(i=0;i<n;i++)
		{
			cin>>val;
			val-=5;
			if(val>change)
				all="NO";
			else{
				change+=5;
				change-=val;
			}
		}
		if(i==n)
			cout<<all<<endl;
		else
			cout<<all<<endl;
	}
	return 0;
}