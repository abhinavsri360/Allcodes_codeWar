/*You are given a sequence of n songs where the i th song is l i minutes long. You want to place
all of the songs on an ordered series of CDs (e.g. CD 1, CD 2, CD 3, … ; CD k) where each
CD can hold m minutes. Furthermore,
(1) The songs must be recorded in the given order, song 1, song 2, ..., song n.
(2) All songs must be included.
(3) No song may be split across CDs.
Your goal is to determine how to place them on the CDs as to minimize the number of CDs
needed. Give the most efficient algorithm you can to find an optimal solution for this
problem, prove the algorithm is correct and analyze the time complexity.*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	float m,k,cap=0;
	cin>>n>>m>>k;
	float t[n];
	for(int i=0;i<n;i++)
		cin>>t[i];
	sort(t,t+n);
	for(int i=0;i<n;i++)
	{
		while(m)
		{
			if(m-t[i]>=0)
			{
				m-=t[i];
				i++;
			}
			else
				break;
		}
		cap++;
	}
	cout<<cap<<endl;
	return 0;
}