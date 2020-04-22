#include<iostream>
using namespace std;

int main()
{
	int n,fts=0,stf=0;
	cin>>n;
	char a,b;
	cin>>a;
	for(int i=1;i<n;i++)
	{
		cin>>b;
		if(a=='F' && b=='S')
			fts++;
		if(a=='S' && b=='F')
			stf++;
		a=b;
	}
	if(stf>fts)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}