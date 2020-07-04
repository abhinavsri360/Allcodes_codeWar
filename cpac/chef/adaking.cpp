#include<bits/stdc++.h>
using namespace std;

#define abhinav ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define ll long long int

void solve(){
	int k,rows=0,col=0;
	cin>>k;
	cout<<"O";
	for(int i=2;i<=k;i++){
		cout<<".";
		col++;
		if(i%8==0){
			col=0;
			rows++;
			cout<<endl;
		}
	}
	/*if(rows){*/
	if(rows==8)
		goto L;
	if(rows){
		for(int i=col;i<8;i++){
			cout<<"X";
		}
		cout<<endl;
		rows++;
		if(rows==8)
			goto L;
		for(int i=-1;i<col;i++){
			cout<<"X";
		}
		for(int i=col;i<7;i++){
			cout<<".";
		}
		cout<<endl;
		rows++;
		for(int i=rows;i<8;i++){
			for(int j=0;j<8;j++){
				cout<<".";
			}
			cout<<endl;
		}
	}
	else{
		for(int i=col;i<7;i++){
			cout<<"X";
		}
		cout<<endl;
		rows++;
		for(int i=-1;i<=col;i++){
			cout<<"X";
		}
		for(int i=col;i<6;i++){
			cout<<".";
		}
		cout<<endl;
		rows++;
		for(int i=rows;i<8;i++){
			for(int j=0;j<8;j++){
				cout<<".";
			}
			cout<<endl;
		}
	}
	
	/*}
	else if(rows){
		for(int i=col;i<9;i++){
			cout<<"X ";
		}
		cout<<endl;
		rows++;
		for(int i=rows;i<8;i++){
			for(int j=0;j<8;j++){
				cout<<". ";
			}
			cout<<endl;
		}
	}
	else{
		
		cout<<endl;
		rows++;
		for(int i=rows;i<8;i++){
			for(int j=0;j<8;j++){
				cout<<". ";
			}
			cout<<endl;
		}
	}*/
	L:
	cout<<endl<<endl;
}

int main()
{
	abhinav;
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}