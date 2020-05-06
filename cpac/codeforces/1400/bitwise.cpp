#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long t,x,y,l,r,res=0,z,temp;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>l>>r;
		r++;
		for(int i=x;i<r;i++)
		{
			temp = (x & i)*(y & i);
			if(temp>res)
			{
				z = i;
				res = temp;
			}
		}
		cout<<z<<endl;
		res=0;
	}
	return 0;
}