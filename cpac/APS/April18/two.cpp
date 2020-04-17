#include<iostream>
using namespace std;
int N;
int no_ways(int W,int index){
	
	if(!W)
		return 1;
	if(index==N)
		return 0;

	int ans = 0;
	for(int i=0;i*(1<<index)<=W;i++)
		ans+=no_ways(W-i*(1<<index),index+1);

	return ans;
	
}
main(){
	int W;
	cin>>N>>W;
	cout<<no_ways(W,0)<<endl;
	return 0;
}