#include<bits/stdc++.h>
using namespace std;

void generateLatin(int n,int *a) 
{
	int b=0,c=0;
	int k = n+1;
	for(int i=0; i<n; i++) 
	{ 
		int temp = k; 
		while (temp <= n) 
		{
			*((a+c*n)+b)=temp;
			cout<<temp<<"n";
			b++;
			temp++;
		}
		b=0;
		for (int j=1; j<k; j++) 
		{
			*((a+c*n)+b)=j;
			b++;
			cout<<j<<"m";
		}
		c++;
		b-=c;
		k--;
		cout<<endl;
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cout<<*((a+i*n)+j);
} 

int main() 
{
	int n,t;
	cin>>t;
	t++;
	for(int i=1;i<t;i++)
	{
		cin>>n;
		int a[n][n];
		generateLatin(n,(int *)a);
	}
	return 0; 
} 
