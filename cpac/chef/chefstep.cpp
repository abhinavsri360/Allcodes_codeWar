#include<bits/stdc++.h>
using namespace std;

void calculate_step(){
	int n,k,d;
	string s="";
	cin>>n>>k;
	while(n--){
		cin>>d;
		if(d%k)
			s.push_back('0');
		else
			s.push_back('1');
	}
	cout<<s<<endl;
}

int main(){
	size_t t;
	cin>>t;
	while(t--){
		calculate_step();
	}
	return 0;
}