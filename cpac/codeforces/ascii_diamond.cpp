#include<iostream>
using namespace std;

void draw(int n)
{
	int a=4+(n-1)*2;
	int b=2*n-1;
	int size=n-1;
	int dash=0;
	for(int i=0;i<a;i++)
	{
		if(i==0 || i==a-1)
			cout<<"+";
		else
			cout<<"-";
	}
	cout<<endl;

	for(int i=0;i<b/2+1;i++)
	{
		cout<<"|";
		for(int j=0;j<size;j++)
			cout<<" ";

		if(i==n-1 && i%2==0)
		{
			cout<<"<";
			for(int k=0;k<(n-1)*2;k++)
				cout<<"=";
			cout<<">";
		}
		else if(i==n-1 && i%2!=0)
		{
			cout<<"<";
			for(int k=0;k<(n-1)*2;k++)
				cout<<"-";
			cout<<">";
		}
		else if(i%2==0)
		{
			cout<<"/";
			for(int k=0;k<dash;k++)
				cout<<"=";
			cout<<"\\";
		}
		else if(i%2!=0)
		{
			cout<<"/";
			for(int k=0;k<dash;k++)
				cout<<"-";
			cout<<"\\";
		}

		for(int j=0;j<size;j++)
			cout<<" ";
		
		cout<<"|";

		cout<<endl;
		dash+=2;
		size--;
	}
	dash-=4;
	size+=2;

	if(n%2!=0)
	{
		for(int i=0;i<b/2;i++)
		{
			cout<<"|";
			for(int j=0;j<size;j++)
				cout<<" ";

			if(i%2==0)
			{
				cout<<"\\";
				for(int k=0;k<dash;k++)
					cout<<"-";
				cout<<"/";
			}
			else if(i%2!=0)
			{
				cout<<"\\";
				for(int k=0;k<dash;k++)
					cout<<"=";
				cout<<"/";
			}

			for(int j=0;j<size;j++)
				cout<<" ";
			
			cout<<"|";

			cout<<endl;
			dash-=2;
			size++;
		}
	}
	else
	{
		for(int i=0;i<b/2;i++)
		{
			cout<<"|";
			for(int j=0;j<size;j++)
				cout<<" ";

			if(i%2==0)
			{
				cout<<"\\";
				for(int k=0;k<dash;k++)
					cout<<"=";
				cout<<"/";
			}
			else if(i%2!=0)
			{
				cout<<"\\";
				for(int k=0;k<dash;k++)
					cout<<"-";
				cout<<"/";
			}

			for(int j=0;j<size;j++)
				cout<<" ";
			
			cout<<"|";

			cout<<endl;
			dash-=2;
			size++;
		}
	}

	for(int i=0;i<a;i++)
	{
		if(i==0 || i==a-1)
			cout<<"+";
		else
			cout<<"-";
	}
}

int main()
{
	int n;
	cin>>n;
	draw(n);
	return 0;
}