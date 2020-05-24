#include<bits/stdc++.h> 
using namespace std; 

void printArray(int arr[500][500], int row, int col) 
{ 
	unordered_set<string> uset; 
	
	for(int i = 0; i < row; i++) 
	{ 
		string s = ""; 
		
		for(int j = 0; j < col; j++) 
		{
		    s += to_string(arr[i][j]);
		}
		
		if(uset.count(s) == 0) 
		{ 
			uset.insert(s); 
			cout << s << endl; 
			
		} 
	} 
} 

 
int main() 
{ 
    int m,n,x;
    cin>>x;
    
    int arr[500][500] ;
    
    for(int i =0 ; i < x ; i++)
    {
        cin>>m>>n;
	    
	    for(int r =0 ; r < m ; r++)
        {    
            for(int s =0 ; s < n ; s++)
            {
                cin>>arr[r][s];
            }
        }
	    
	    printArray(arr, m, n); 
    } 
    
    return 0;
}