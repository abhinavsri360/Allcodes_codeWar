/*Suppose you were to drive from St. Louis to Denver along I-70. Your gas tank, when full,
holds enough gas to travel m miles, and you have a map that gives distances between gas
stations along the route. Let d1 &lt; d2 &lt; …. &lt; d n be the locations of all the gas stations
along the route where d i is the distance from St. Louis to the gas station. You can assume
that the distance between neighboring gas stations is at most m miles.
Your goal is to make as few gas stops as possible along the way. Give the most efficient
algorithm you can find to determine at which gas stations you should stop and prove that
your strategy yields an optimal solution. Be sure to give the time complexity of your
algorithm as a function of n.*/
#include<iostream>
using namespace std;

int main()
{
	int c=0,m,n;
	cin>>m>>n;
	int t=m;
	int a[n];
	cin>>a[0];
	for(int i=1;i<n;i++)
	{
		cin>>a[i];
		a[i-1]=a[i]-a[i-1];
	}
	for(int i=0;i<n-1;i++)
	{	
		m=(m-a[i]<a[i+1])?t:m-a[i];
		if(m==t)
			c++;
	}
	cout<<c<<endl;
	return 0;
}