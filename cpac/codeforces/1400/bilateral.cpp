#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define ll long long int

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,c=0;
		bool flag=false;
		vector<int>::iterator iter;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		vector<int> arr(a,a+n+1);
		arr.push_back(-1);
		cin>>m;
		int b[m];
		for(int i=0;i<m;i++)
			cin>>b[i];
		vector<int> brr(b,b+m);
		for(auto t=arr.begin();t!=arr.end();++t)
		{
			iter=find(brr.begin(),brr.end(),*t);
			if(iter!=brr.end())
				flag=true;
			else if(flag)
			{
				c++;
				flag=false;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}