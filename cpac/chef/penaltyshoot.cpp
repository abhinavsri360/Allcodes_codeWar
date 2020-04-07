#include<bits/stdc++.h>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"


int main()
{
	int i,a=0,b=0,n,t,a_m=0,b_m=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s;
		cin>>s;
        for(int i=0; i<2*n; i++)
        {
            if(s[i]=='1'){
                if(i&1) b++;
                else a++;
            }
            else if(s[i]=='0'){
                if(i&1) b_m++;
                else a_m++;
            }
            if(a>n-b_m){
                cout << i+1 << endl; break;
            }
            if(b>n-a_m){
                cout << i+1 << endl; break;
            }
            if(i+1==2*n){
                cout << i+1 << endl;
            }
        }
        a=b=a_m=b_m=0;
	}
	return 0;
}