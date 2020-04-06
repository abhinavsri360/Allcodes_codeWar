#include<iostream>
#include<math.h>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"

long n,k,t,p;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		p=pow(2,k);
		if(p>n)
			cout<<0<<endl;
		else 
			cout<<1<<endl;
	}
	return 0;
}