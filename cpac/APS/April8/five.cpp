/*You are given n events where each takes one unit of time. Event i will provide a profit of g i
dollars (g i &gt; 0) if started at or before time t i where t i is an arbitrary real number. (Note: If an
event is not started by t i then there is no benefit in scheduling it at all. All events can start
as early as time 0.)
Given the most efficient algorithm you can to find a schedule that maximizes the profit.*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t,pro=0;
	cin>>n>>t;
	int g[n];
	for(int i=0;i<n;i++)
		cin>>g[i];
	sort(g,g+n,greater<int>());
	if(t>n)
		goto L;
	for(int i=0;i<t;i++)
			pro+=g[i];
	cout<<"Max Profit:"<<pro<<endl;
	return 0;
	L:
	for(int i=0;i<n;i++)
		pro+=g[i];
	cout<<"Max Profit:"<<pro<<endl;
	return 0;
}