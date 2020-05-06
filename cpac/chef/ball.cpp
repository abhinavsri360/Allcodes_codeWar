#include<iostream>
#include<math.h>
using namespace std;

int calc(int n)
{
	int p=0;
	L:
	if(pow(2,p)<n)
	{
		p++;
		goto L;
	}
	else
	{
		if(pow(2,p)>n)
			return pow(2,p-1);
		else
			return pow(2,p);
	}
}

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int c=0;
		while(n)
		{
			n-=calc(n);
			if(n==1)
			{
				c+=2;
				break;
			}
			c++;
		}
		if(c>0)
			cout<<c-1<<endl;
		else
			cout<<"0"<<endl;
	}
	return 0;
}