#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int wt[n];
	int profit[n];
	for(int i=0;i<n;i++)
		cin>>wt[i];
	for(int i=0;i<n;i++)
		cin>>profit[i];
	int w,p=0;
	cin>>w;
	for(int i=n-1;i>-1;i--)
	{
		if(wt[i]<=w)
			p+=profit[i];
		w-=wt[i];
		if(w==0 || w<wt[0])
			break;
	}
	cout<<"Profit:"<<p<<endl;
	return 0;
}