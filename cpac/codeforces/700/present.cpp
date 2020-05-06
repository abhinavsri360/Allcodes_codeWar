#include<iostream>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"

int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[a[i]-1]=i+1;
	}
	for(int i=0;i<n;i++)
		cout<<b[i]<<" ";
	return 0;
}