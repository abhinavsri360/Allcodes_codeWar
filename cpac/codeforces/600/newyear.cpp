#include<iostream>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	string a[n];
	string b[m];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
	int num,t;
	string comb;
	cin>>t;
	while(t--)
	{
		cin>>num;
		comb=a[(num-1)%n]+b[(num-1)%m];
		cout<<comb<<endl;
	}
	return 0;
}