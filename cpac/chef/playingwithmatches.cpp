#include<iostream>
using namespace std;

int matches(int s)
{
	int sum=0;
	while(s!=0)
	{
		switch(s%10)
		{
			case 0:
					sum+=6;
					break;
			case 1:
					sum+=2;
					break;
			case 2:
					sum+=5;
					break;
			case 3:
					sum+=5;
					break;
			case 4:
					sum+=4;
					break;
			case 5:
					sum+=5;
					break;
			case 6:
					sum+=6;
					break;
			case 7:
					sum+=3;
					break;
			case 8:
					sum+=7;
					break;
			case 9:
					sum+=6;
					break;
		}
		s/=10;
	}
	return sum;
}

int main()
{
	int a,b,t;
	cin>>t;
	while(t--!=0)
	{
		cin>>a>>b;
		cout<<matches(a+b)<<endl;
	}
	return 0;
}