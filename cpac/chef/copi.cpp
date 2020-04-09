// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function to count possible pairs 
void CountPair(int L, int R) 
{ 

	// total count of numbers in range 
	int x = (R - L + 1); 

	// Note that if 'x' is odd then 
	// there will be '1' element left 
	// which can't form a pair 

	// printing count of pairs 
	cout << x / 2 << "\n"; 
} 

// Driver code 
int main() 
{ 

	int L, R; 

	L = 1, R = 10; 
	CountPair(L, R); 

	return 0; 
} 
