#include<iostream>
using namespace std;

int main()
{
	int k,t,a,b,sum;
	cin>>t;
	while(t--)
	{
		cin>>k>>a>>b;
		sum=a+b;
		while(k--)
			sum+=sum%10;
		if(sum%3)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}