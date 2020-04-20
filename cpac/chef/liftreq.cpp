#include<iostream>
using namespace std;

int main()
{
	long n,q,f,d,t;
	cin>>t;
	long s=0,floor=0;
	while(t--)
	{
		cin>>n>>q;
		while(q--)
		{
			cin>>f;
			if(f>s)
			{
				floor+=abs(f-s);
				s=f;
			}
			if(f<s)
			{
				floor+=abs(s-f);
				s=f;
			}
			cin>>d;
			if(d>s)
			{
				floor+=abs(d-s);
				s=d;
			}
			if(d<s)
			{
				floor+=abs(s-d);
				s=d;
			}
		}
		cout<<floor<<endl;
		s=0;
		floor=0;
	}
	return 0;
}