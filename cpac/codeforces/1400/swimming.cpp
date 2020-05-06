#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		n*=2;
		n*=n;
		n/=2;
		cout<<n<<endl;
	}
	return 0;
}