#include<iostream>
using namespace std;

int main()
{
	int a,n;
	cin>>n;
	while(n)
	{
		cin>>a;
		if(a)
			goto L;
		n--;
	}
	cout<<"EASY"<<endl;
	return 0;
	L:
	cout<<"HARD"<<endl;
	return 0;
}