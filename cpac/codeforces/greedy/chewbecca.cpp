#include<bits/stdc++.h>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define ll long long int

int main()
{
	abhinav;
	string n,x="";
	int c,i=0;
	cin>>n;
	if(n[0]=='9'){
		i=1;
		x+='9';
	}
	for(i;i<n.length();i++)
	{
		if((int)n[i]-48<5)
			x+=n[i];
		else{
			c=(int)n[i];
			x+=(char)(105-c);
		}
	}
	cout<<x<<endl;
	return 0;
}