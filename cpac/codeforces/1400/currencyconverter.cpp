#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float n;
		string s;
		cin>>n>>s;
		if(s[0]=='P')
		{
			cout<<"$"<<n<<" CONVERTS TO ";
			printf("%.2f",n*0.84);
			cout<<" "<<s<<endl;
		}
		else if(s[0]=='L')
		{
			cout<<"$"<<n<<" CONVERTS TO ";
			printf("%.0f",n*2040);
			cout<<" "<<s<<endl;
		}
		else if(s[0]=='F')
		{
			cout<<"$"<<n<<" CONVERTS TO ";
			printf("%2f",n*9.85);
			cout<<" "<<s<<endl;
		}
		else if(s[0]=='M')
		{
			cout<<"$"<<n<<" CONVERTS TO ";
			printf("%.2f",n*3.23);
			cout<<" "<<s<<endl;
		}
		else if(s[0]=='Y')
		{
			cout<<"$"<<n<<" CONVERTS TO ";
			printf("%.0f",n*260);
			cout<<" "<<s<<endl;
		}
	}
	return 0;
}