#include<bits/stdc++.h>
using namespace std;

string max(int s,int a,int b){
	for(int i=1;i<=s;i++)
	{
		if(i%2!=0)
			a-=i;
		else if(i%2==0)
			b-=i;
		if(a<0)
			return "Bob";
		if(b<0)
			return "Limak";
	}
}

int main(){
	int t,a,b;
	cin>>t;
	while(t--!=0)
	{
		cin>>a>>b;
		cout<<max(a+b,a,b)<<endl;
	}
	return 0;
}