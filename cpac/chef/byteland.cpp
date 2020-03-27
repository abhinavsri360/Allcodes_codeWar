#include<iostream>
using namespace std;

string byte(string b, string a)
{
	string e="";
	for(int i=0;i<b.length();i++)
	{
		if(b[i]>='a' && b[i]<='z')
			e+=a[(int)b[i]-97];
		else if(b[i]>='A' && b[i]<='Z')
			e+=toupper(a[(int)b[i]-65]);
		else if(b[i]=='_')
			e+=" ";
		else
			e+=b[i];
	}
	return e;
}

int main()
{
	int t;
	string a,b;
	cin>>t;
	cin>>a;
	while(t--!=0)
	{
		cin>>b;
		cout<<byte(b,a)<<endl;
	}
	return 0;
}