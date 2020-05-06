#include<iostream>
using namespace std;

int main()
{
	int n,m,c;
	int a=0,b=0;
	cin>>n;
	while(n--)
	{
		cin>>m>>c;
		if(m>c)
			a++;
		else if(c>m)
			b++;
	}
	if(a>b)
		cout<<"Mishka"<<endl;
	else if(b>a)
		cout<<"Chris"<<endl;
	else
		cout<<"Friendship is magic!^^"<<endl;
	return 0;
}