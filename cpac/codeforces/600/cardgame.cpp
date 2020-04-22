#include<iostream>
using namespace std;

int main()
{
	string t;
	string c[5];
	cin>>t;
	for(int i=0;i<5;i++)
		cin>>c[i];
	for(int i=0;i<5;i++)
	{
		if(c[i][0]==t[0] || c[i][1]==t[1])
			goto L;
	}
	cout<<"NO"<<endl;
	return 0;
	L:
	cout<<"YES"<<endl;
	return 0;
}