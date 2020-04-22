#include<bits/stdc++.h> 
using namespace std; 

int MatrixChainOrder(int p[], int i, int j) 
{ 
	if(i == j) 
		return 0; 
	int k; 
	int min = INT_MAX; 
	int count; 

	for (k = i; k < j; k++) 
	{ 
		count = MatrixChainOrder(p, i, k) + 
				MatrixChainOrder(p, k + 1, j) + 
				p[i - 1] * p[k] * p[j]; 

		if (count < min) 
			min = count; 
	} 

	return min; 
} 

int main() 
{ 
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter length and breath continuously"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];

	cout<< MatrixChainOrder(arr, 1, n - 1); 
}