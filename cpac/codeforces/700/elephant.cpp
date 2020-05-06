#include<iostream>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"

int max(int n)
{
	if(n>=5)
		return 5;
	else if(n>=4)
		return 4;
	else if(n>=3)
		return 3;
	else if(n>=2)
		return 2;
	else
		return 1;
}

int main()
{
	int n,c=0;
	cin>>n;
	while(n!=0)
	{
		n-=max(n);
		c++;
	}
	cout<<c<<endl;
	return 0;
}