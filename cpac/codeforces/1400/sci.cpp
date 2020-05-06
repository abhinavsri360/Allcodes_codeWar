#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float a,e;
		cin>>a>>e;
		e=pow(10,e);
		printf("%.2f\n",a*e);
	}
	return 0;
}