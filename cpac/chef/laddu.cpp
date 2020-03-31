#include<iostream>
using namespace std;

int main()
{
	int n,t,l=0,r;
	string c,d;
	cin>>t;
	while(t--)
	{
		cin>>n>>c;
		while(n--)
		{
			cin>>d;
			if(d[0] == 'T')
				l+=300;
			else if(d[0] == 'B')
			{
				cin>>r;
				l+=r;
			}
			else if(d[8] == 'W')
			{
				cin>>r;
				if(r<21)
					l+=300+20-r;
				else
					l+=300;
			}
			else
				l+=50;
		}
		if(c[0] == 'I')
			cout<<l/200<<endl;
		else
			cout<<l/400<<endl;
		l=0;
	}
	return 0;
}