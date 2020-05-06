#include<iostream>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"

int main()
{
	int n,a=0,d=0;
	cin>>n;
	char c;
	while(n--)
	{
		cin>>c;
		if(c=='D')
			d++;
		else
			a++;
	}
	if(a>d)
		cout<<"Anton"<<endl;
	else if(d>a)
		cout<<"Danik"<<endl;
	else
		cout<<"Friendship"<<endl;
	return 0;
}