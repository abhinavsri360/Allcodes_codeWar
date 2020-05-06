#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int e,f;
		e=sqrt(a*a+b*b);
		f=sqrt(c*c+d*d);
		if(e>f)
			cout<<"B IS CLOSER"<<endl;
		else if(f>e)
			cout<<"A IS CLOSER"<<endl;
	}
	return 0;
}