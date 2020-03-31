#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,t,a,b,sum;
	cin>>t;
	while(t--)
	{
		cin>>k>>a>>b;
		sum=a+b;
		while(k--)
			sum+=sum%10;
		cout << (sum % 3 == 0 ? "YES" : "NO") << endl;
	}
	return 0;
}