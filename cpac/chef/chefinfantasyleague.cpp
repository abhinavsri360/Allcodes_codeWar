#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,s;
		cin>>n>>s;
		s=100-s;
		int price[n];
		int typo[n];
		int f=0,d=0;
		for(int i=0;i<n;i++)
			cin>>price[i];
		for(int i=0;i<n;i++)
		{
			cin>>typo[i];
			if(typo[i]==1)
				f++;
			else
				d++;
		}
		if(f==0 || d==0)
			cout<<"no"<<endl;
		else{
			int forward[f];
			int defender[d];
			f=0,d=0;
			for(int i=0;i<n;i++)
			{
				if(typo[i]==1)
					forward[f++]=price[i];
				else
					defender[d++]=price[i];
			}
			sort(defender,defender+d);
			sort(forward,forward+f);
			if(defender[0]+forward[0]>s)
				cout<<"no"<<endl;
			else
				cout<<"yes"<<endl;
		}
	}
	return 0;
}