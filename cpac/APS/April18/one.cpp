#include<bits/stdc++.h> 
using namespace std; 

const int no_of_chars = 256; 

int findsublen(string s, string c) 
{ 
	int len_s = s.length(); 
	int len_c = c.length(); 

	int hash_c[no_of_chars] = {0}; 
	int hash_s[no_of_chars] = {0}; 

	for (int i = 0; i < len_c; i++) 
		hash_c[c[i]]++; 

	int start = 0, start_index = -1, min_len = INT_MAX; 

	int count = 0; 
	for (int j = 0; j < len_s ; j++) 
	{ 
		hash_s[s[j]]++; 

		if (hash_c[s[j]] != 0 && 
			hash_s[s[j]] <= hash_c[s[j]] ) 
			count++; 

		if (count == len_c) 
		{ 
			while ( hash_s[s[start]] > hash_c[s[start]] || hash_c[s[start]] == 0) 
			{ 

				if (hash_s[s[start]] > hash_c[s[start]]) 
					hash_s[s[start]]--; 
				start++; 
			} 

			int len_window = j - start + 1; 
			if (min_len > len_window) 
			{ 
				min_len = len_window; 
				start_index = start; 
			} 
		} 
	}
	if(start_index == -1)
		return -1;
	else
		return s.substr(start_index, min_len).length(); 
} 

int main() 
{
	string s,c;
	int n;
	char ch;
	cin>>s;
	cin>>n;
	if(n==0)
		goto L;
	for(int i=0;i<n;i++)
	{
		cin>>ch;
		c+=ch;
	} 
	cout<<findsublen(s,c)<<endl; 
	return 0;
	L:
	cout<<0<<endl;
	return 0; 
} 
