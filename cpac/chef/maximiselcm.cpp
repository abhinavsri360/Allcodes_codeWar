#include<iostream>
using namespace std;

int gcd(int a, int b) 
{
    if (a == 0 && b == 0)
        return 0;
    else {
        int t;
        while (b != 0) {
            t = a;
            a = b;
            b = t % a;
        }
        return a;
    }
}

int lcm(int a, int b) 
{
    if (a == 0 && b == 0)
        return 0;
    else
        return a * b / gcd(a, b);
}

int maximise(int a[],int m,int n)
{
	int l=lcm(a[0],a[1]);
	for(int i=2;i<n;i++)
	{
		if(lcm(l,a[i])>l)
			l=lcm(l,a[i]);
	}
	n=1;
	for(int i=1;i<=m;i++)
	{
		if(lcm(l,m)>l)
		{n=m;l=lcm(l,m);}
	}
	return n;
}

int main()
{
	int n,m,t;
	cin>>t;
	while(t--!=0)
	{
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<maximise(a,m,n)<<endl;
	}
}