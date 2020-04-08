/*
Given a set (x1 &lt; = x2 &lt;= …..&lt;= x n ) of points on the real line, determine the smallest set
of unit-length closed intervals (e.g. the interval [1.25, 2.25] includes all x i such that 1.25&lt;=
x i &lt;= 2.25) that contains all of the points.
Give the most efficient algorithm you can to solve this problem, prove it is correct and
analyze the time complexity.
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	float a,b,c,n;
	cin>>n;
	cin>>a>>b;
	if(b-a==1)
		goto L;
	c=b;
	for(int i=0;i<n-2;i++)
	{
		b=c;
		cin>>c;
		if(c-b==1.0)
			break;
	}
	cout<<b<<" "<<c<<endl;
	return 0;
	L:
	cout<<a<<" "<<b<<endl;
	return 0;
}