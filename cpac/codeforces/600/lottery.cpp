#include<iostream>
using namespace std;

int max(int n)
{
	if(n>=100)
		return 100;
	if(n>=20)
		return 20;
	if(n>=10)
		return 10;
	if(n>=5)
		return 5;
	if(n>=1)
		return 1;
}

int main()
{
	int n,temp=0;
	cin>>n;
	while(n)
	{
		n-=max(n);
		temp++;
	}
	cout<<temp<<endl;
	return 0;
}