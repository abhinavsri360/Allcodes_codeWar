#include<bits/stdc++.h>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define ll long long int

int main()
{
	abhinav;
	int t;
	cin>>t;
	while(t--)
	{
		int pair=0;
		char s[100000];
		cin>>s;
		for(int i=0;s[i]!='\0';){
			if((s[i] == 'x' && s[i+1] == 'y') || (s[i] == 'y' && s[i+1] == 'x'))
			{
				pair++;
				i+=2;
			}
			else
				i++;
		}
		cout<<pair<<endl;
		pair=0;
	}
	return 0;
}