#include<iostream>
using namespace std;

int main()
{
	int n,sum=0;
	cin>>n;
	while(n)
	{
		sum+=n%10;
		n/=10;
	}
	cin>>n;
	while(n)
	{
		sum+=n%10;
		n/=10;
	}
	cin>>n;
	while(n)
	{
		sum+=n%10;
		n/=10;
	}
	if(sum%24)
		cout<<"Not my day"<<endl;
	else
		cout<<"My day"<<endl;
	return 0;
}