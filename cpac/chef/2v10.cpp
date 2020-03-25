#include<iostream>
using namespace std;

int main()
{
	int a,t;
	cin>>t;
	while(t--!=0)
	{
		cin>>a;
		if(a%10==0)
			cout<<"0"<<endl;
		else if(a%10==5)
			cout<<"1"<<endl;
		else
			cout<<"-1"<<endl;
	}
	return 0;
}