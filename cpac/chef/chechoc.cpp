#include<bits/stdc++.h>
using namespace std;

void candy(){
	int n,m,x,y,tot=0;
	cin>>n>>m>>x>>y;
	if(n==1 && m==1)
		cout<<x<<endl;
	else if(2*x > y) {
		if((n*m) % 2)
			cout<<((n*m)/2)*y + min(x,y)<<endl;
		else
			cout<<((n*m)/2)*y<<endl;
	}
	else
		cout<<m*n*x<<endl;
}

int main(){
	size_t t;
	cin>>t;
	while(t--){
		candy();
	}
	return 0;
}