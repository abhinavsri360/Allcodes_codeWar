#include<iostream>
using namespace std;

int main()
{
	int num,z=0,n=0;
	string s;
	cin>>num;
	cin>>s;
	for(int i=0;i<num;i++)
	{
		if(s[i]=='z')
			z++;
		if(s[i]=='n')
			n++;
	}
	while(n--)
		cout<<"1 ";
	while(z--)
		cout<<"0 ";
	cout<<endl;
	return 0;
}