#include <bits/stdc++.h> 
using namespace std; 

#define ll long long int

void countFreq(ll arr[], ll n) 
{ 
	vector<bool> visited(n, false); 

	for (int i = 0; i < n; i++) { 

		if (visited[i] == true) 
			continue; 

		ll count = 1; 
		for (int j = i + 1; j < n; j++) { 
			if (arr[i] == arr[j]) { 
				visited[j] = true; 
				count++; 
			} 
		} 
		cout << arr[i] << ":" << count << endl; 
	} 
} 

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		countFreq(arr, n); 
	}
	return 0; 
} 
