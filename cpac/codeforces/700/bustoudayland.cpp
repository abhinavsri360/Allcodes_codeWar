#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string bus[n];
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		cin>>bus[i];
		if(bus[i][0]=='O' && bus[i][1]=='O' && flag!=true)
		{
			bus[i][0]='+';
			bus[i][1]='+';
			flag=true;
		}
		if(bus[i][3]=='O' && bus[i][4]=='O' && flag!=true)
		{
			bus[i][3]='+';
			bus[i][4]='+';
			flag=true;
		}
	}
	if(flag)
		cout<<"YES"<<endl;
	else
	{
		cout<<"NO"<<endl;
		goto L;
	}
	for(int i=0;i<n;i++)
		cout<<bus[i]<<endl;
	L:
		return 0;
}