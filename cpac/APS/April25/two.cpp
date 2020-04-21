#include<iostream>
using namespace std;

int max(int a,int b)
{
	return (a > b) ? a : b;
}

int main()
{
	string a,b;
	cin>>a>>b;
	int arr[a.length()+1][b.length()+1];
	for(int i=0;i<b.length()+1;i++)
		arr[0][i]=0;
	for(int i=0;i<a.length()+1;i++)
		arr[i][0]=0;
	for(int i=1;i<a.length()+1;i++)
	{
		for(int j=1;j<b.length()+1;j++)
		{
			if(a[i]==b[j])
				arr[i][j]=arr[i-1][j-1]+1;
			else
				arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
		}
	}
	cout<<"Length of longest subsequnce is "<<arr[a.length()][b.length()]<<endl;
	return 0;
}