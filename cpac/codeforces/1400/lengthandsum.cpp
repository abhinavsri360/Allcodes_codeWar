#include<iostream>
using namespace std;

long long find(long long s)
{
	if(s>=9)
		return 9;
	else if(s>=8)
		return 8;
	else if(s>=7)
		return 7;
	else if(s>=6)
		return 6;
	else if(s>=5)
		return 5;
	else if(s>=4)
		return 4;
	else if(s>=3)
		return 3;
	else if(s>=2)
		return 2;
	else
		return 1;
}

long long rev(long long n)
{
	long long rev=0;
	while(n)
	{
		rev=rev*10 + n%10;
		n/=10;
	}
	return rev;
}

int main()
{
	long long n,s,num=0;
	cin>>n>>s;
	if(s<n)
		goto L;
	while(n--)
	{
		num=num*10+find(s);
		s-=find(s);
	}
	cout<<rev(num)<<" "<<num<<endl;
	return 0;
	L:
	cout<<"-1 -1"<<endl;
	return 0;
}