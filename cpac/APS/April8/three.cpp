/*Suppose we want to make change for n cents, using the least number of coins of
denominations 1; 10, and 25 cents. Consider the following greedy strategy: suppose the
amount left to change is m; take the largest coin that is no more than m; subtract this coin&#39;s
value from m, and repeat.
Either give a counterexample, to prove that this algorithm can output a non-optimal
solution, or prove that this algorithm always outputs an optimal solution.*/
#include<iostream>
using namespace std;

int c[3]={1,10,25};

int max(int m)
{
	if(m-c[2]>=0)
		return c[2];
	else if(m-c[1]>=0)
		return c[1];
	else
		return c[0];
}

int solve(int m)
{
	int n=0;
	while(1)
	{
		if(m)
		{
			m-=max(m);
			n++;
		}
		else
			break;
	}
	return n;
}

int main()
{
	int m,t;
	cout<<"Test cases:";
	cin>>t;
	while(t--)
	{
		cin>>m;
		cout<<solve(m)<<endl;
	}
	return 0;
}