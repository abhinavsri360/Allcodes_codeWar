#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>s;
		if(s.substr(s.length()-2,s.length())=="po")
			cout<<"FILIPINO"<<endl;
		else if(s.substr(s.length()-4,s.length())=="desu" || s.substr(s.length()-4,s.length())=="masu")
			cout<<"JAPANESE"<<endl;
		else
			cout<<"KOREAN"<<endl;
	}
	return 0;
}