#include<iostream>
using namespace std;

bool checkifsorted(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]!=i+1)
			return false;
	}
	return true;
}

int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int a[n];
		int b[3];
		int j=-1,t,m=0;
		bool flag=false;
		for(int i=0;i<n;i++)
			cin>>a[i];
		if(!checkifsorted(a,n))
		{
			for(int i=0;i<n;i++)
			{
				if(a[i]!=i+1)
					b[++j]=i;
				if(j==2)
					break;
			}
			if(j<2)
			{
				cout<<"-1"<<endl;
				return 0;
			}
			for(int i=0;i<2;i++)
			{
				t=a[b[2]];
				a[b[2]]=a[b[1]];
				a[b[1]]=a[b[0]];
				a[b[0]]=t;
				m++;
				k--;
				if(checkifsorted(a,n) || k==0)
					break;
			}
			if(checkifsorted(a,n))
			{
				cout<<m<<endl;
				while(m--)
					cout<<b[0]+1<<" "<<b[1]+1<<" "<<b[2]+1<<" "<<endl;
			}
			else
				cout<<"-1"<<endl;
		}
		else
			goto R;
	}
	return 0;
	R:
	cout<<"0"<<endl;
	return 0;
}