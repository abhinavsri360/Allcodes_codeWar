#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int min=INT_MAX,max=INT_MIN;
		int infect=1;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n-1;i++)
		{
			if(a[i+1]-a[i]<=2)
				infect++;
			else{
				if(infect<min)
					min=infect;
				if(infect>max)
					max=infect;
				infect=1;
			}
		}
		if(infect!=0)
		{
			if(infect<min)
				min=infect;
			if(infect>max)
				max=infect;
		}
		cout<<min<<" "<<max<<endl;
	}
	return 0;
}