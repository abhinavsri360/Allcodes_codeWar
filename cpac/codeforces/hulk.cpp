#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string res="I hate ";
	cin>>n;
	n++;
	for(int i=2;i<n;i++)
	{
		res+="that ";
		if(i%2)
			res+="I hate ";
		else
			res+="I love ";
	}
	cout<<res+"it"<<endl;
	return 0;
}