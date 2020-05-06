#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,s=0;
		cin>>a>>b>>c>>d;
		cout<<d-b<<" "<<d-c<<" "<<d-a<<endl;
	}
	return 0;
}