#include <bits/stdc++.h> 
using namespace std; 

int lds(int arr[], int n) 
{ 
	int lds[n]; 
	int i, j, max = 0; 

	for (i = 0; i < n; i++) 
		lds[i] = 1; 

	for (i = 1; i < n; i++) 
		for (j = 0; j < i; j++) 
			if (arr[i] < arr[j] && lds[i] < lds[j] + 1) 
				lds[i] = lds[j] + 1; 

	for (i = 0; i < n; i++) 
		if (max < lds[i]) 
			max = lds[i]; 
	return max; 
}
int main() 
{
	int eof();
	int a[10000000];
	int i=0;
	ifstream fin ;
	fin.open("master", ios::in | ios::binary);
	while(!find.eof())                     
	{
		cin>>a[i];
		i++;
	}
	if(fin.eof())                            
	{	 
		int n = sizeof(a) / sizeof(a[0]); 
		cout << "Length of LDS is " << lds(a, n); 
	}
	return 0; 
} 
//2 1 9 8 10 7 5 4 3 1 10