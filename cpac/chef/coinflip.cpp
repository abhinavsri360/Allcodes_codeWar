#include<iostream>
using namespace std;

int main()
{
	int i,n,q,t,g;
	cin>>t;
	while(t--)
	{
		cin>>g;
		while(g--)
		{
			cin>>i>>n>>q;
			if(n%2)
			{
				if(i==1 && q==1 || i==2 && q==2)
					n/=2;
				else if(i==1 && q==2 || i==2 && q==1)
					n=n/2+1;
			}
			else
				n/=2;
			cout<<n<<endl;
		}
	}
	return 0;
}