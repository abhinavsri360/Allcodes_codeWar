#include<iostream>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"

int main()
{
	float n,a,sum=0,c=0;
	cin>>n;
	while(n--)
	{
		cin>>a;
		sum+=a;
		c++;
	}
	printf("%.4f\n", sum/c);
	return 0;
}