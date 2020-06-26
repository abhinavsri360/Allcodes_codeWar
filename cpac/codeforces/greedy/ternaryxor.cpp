#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i;
	string a="",b="",x;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>x;
		for(i=0;i<n;i++)
		{
			if(x[i]=='2')
			{
				a+="1";
				b+="1";
			}
			else if(x[i]=='0')
			{
				a+="0";
				b+="0";
			}
			else{
				a+="1";
				b+="0";
				break;
			}
		}
		for(int j=i+1;j<n;j++)
		{
			b+=x[j];
			a+="0";
		}
		cout<<a<<endl<<b<<endl;
		a="";
		b="";
	}
	return 0;
}