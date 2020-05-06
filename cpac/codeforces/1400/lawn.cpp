#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n/5000<1)
			cout<<n/5000+1<<" BAG(S) FERTILIZER"<<endl;
		else
			cout<<n/5000<<" BAG(S) FERTILIZER"<<endl;
		if(n/2000<1)
			cout<<n/2000<<" BAG(S) LIME"<<endl;
		else
			cout<<n/2000+1<<" BAG(S) LIME"<<endl;
		if(n/1000<1)
		cout<<n/1000<<" BAG(S) SEED"<<endl;
	}
	return 0;
}