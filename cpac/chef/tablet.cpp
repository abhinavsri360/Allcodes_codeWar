#include<iostream>
using namespace std;

int main()
{
	int t,n,b,w,h,p,max=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>b;
		while(n--)
		{
			cin>>w>>h>>p;
			if(p<=b && w*h>max)
				max=w*h;
		}
		if(max==0)
			cout<<"no tablet"<<endl;
		else
			cout<<max<<endl;
		max=0;
	}
	return 0;
}