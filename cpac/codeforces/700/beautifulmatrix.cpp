#include<iostream>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"

int main()
{
	int i,j,a;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>a;
			if(a==1)
				break;
		}
		if(a==1)
			break;
	}
	i-=2;
	j-=2;
	cout<<abs(i)+abs(j)<<endl;
	return 0;
}