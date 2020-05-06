#include<iostream>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"

int main()
{
	int n,h,a,c=0;
	cin>>n>>h;
	while(n--)
	{
		cin>>a;
		if(a>h)
			c+=2;
		else
			c++;
	}
	cout<<c<<endl;
	return 0;
}