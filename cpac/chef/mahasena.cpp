#include<iostream>
using namespace std;

int main()
{
	int n,e=0,o=0,w;
	cin>>n;
	while(n--)
	{
		cin>>w;
		if(w%2)
			o++;
		else
			e++;
	}
	if(e>o)
		cout<<"READY FOR BATTLE"<<endl;
	else
		cout<<"NOT READY"<<endl;
}