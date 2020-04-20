#include<iostream>
#include<cstdlib>
using namespace std;

int north(int y,int n){
	return y+=n;
}
int south(int y,int n){
	return y-=n;
}
int east(int x,int n){
	return x+=n;
}
int west(int x,int n){
	return x-=n;
}

string reach(int x,int y){
	int inix=0,iniy=0;
	int count =1;
	bool flag = true;
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0;


	do
	{
		

		if(inix==x && iniy==y)
			flag=false;
	}while(flag);
}

int main()
{
	int t,x,y;
	cin>>t;
	string dir;
	for(int i=0;i<t;i++)
	{
		cin>>x>>y;
		if((abs(x)+abs(y))%2==0 && (x!=0 || y!=0))
			cout<<"Case #"<<i+1<<": IMPOSSIBLE";
		else
			cout<<"Case #"<<i+1<<": "<<reach(x,y);
	}
	return 0;
}