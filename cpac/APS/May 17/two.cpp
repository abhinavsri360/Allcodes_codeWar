#include <bits/stdc++.h> 
using namespace std; 

int dictionaryContains(string word) 
{ 
	string dictionary[] = { "mobile", "samsung", "sam", 
							"sung", "man", "mango", 
							"icecream", "and", "go", 
							"i", "like", "ice", "cream" };
							
	int size = sizeof(dictionary) / sizeof(dictionary[0]); 
	
	for (int i = 0; i < size; i++) 
	{
	    if (dictionary[i].compare(word) == 0) 
		{
		    return true; 
		}
	}
	return false; 
} 

bool wordBreak(string s) 
{ 
	int n = s.size(); 
	
	if (n == 0) 
	{
	    return true; 
	}

	vector<bool> dp(n + 1, 0); 
	
	vector<int> matched_index; 
	matched_index.push_back(-1); 

	for (int i = 0; i < n; i++) 
	{ 
		int msize = matched_index.size(); 
		int f = 0; 
		
		for (int j = msize - 1; j >= 0; j--) 
		{ 
			string sb = s.substr(matched_index[j] + 1, i - matched_index[j]); 

			if (dictionaryContains(sb)) 
			{ 
				f = 1; 
				break; 
			} 
		} 

		if (f == 1) 
		{ 
			dp[i] = 1; 
			matched_index.push_back(i); 
		} 
	} 
	return dp[n - 1]; 
} 

int main() 
{ 
	if( wordBreak("ilikesamsung") ) 
	{
	    cout << "Yes"<< endl;
	}
	else
	{
	    cout << "No" << endl;
	}
	
	if( wordBreak("iiiiiiii") ) 
	{
	    cout << "Yes"<< endl;
	}
	else
	{
	    cout << "No" << endl;
	}
	
	if( wordBreak("") ) 
	{
	    cout << "Yes"<< endl;
	}
	else
	{
	    cout << "No" << endl;
	}
	
	if( wordBreak("ilikelikeimangoiii") ) 
	{
	    cout << "Yes"<< endl;
	}
	else
	{
	    cout << "No" << endl;
	}
	
	return 0; 
}
