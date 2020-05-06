#include<iostream>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"

int main()
{
	int n,c=0;
	cin>>n;
	string a,b;
	cin>>a;
	n--;
	while(n--)
	{
		cin>>b;
		if(a[1]==b[0])
			c++;
		a=b;
	}
	cout<<c+1<<endl;
	return 0;
}