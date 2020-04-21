#include<iostream>
using namespace std; 

int count( int arr[], int n, int change ) 
{ 
	if (change == 0) 
		return 1; 
	
	if (change < 0) 
		return 0; 

	if (n <=0 && change >= 1) 
		return 0; 

	return count( arr, n - 1, change ) + count( arr, n, change-arr[n-1] ); 
} 

int main() 
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int change;
	cin>>change;
	cout<<count(arr, n, change)<<endl;
	return 0; 
} 
