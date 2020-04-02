#include<bits/stdc++.h>
using namespace std;

string compare(string str1, string str2) 
{ 
    int n1 = str1.length();
    sort(str1.begin(), str1.end()); 
    sort(str2.begin(), str2.end());
    
    for (int i = 0; i < n1; i++) 
        if (str1[i] != str2[i]) 
            return "NO"; 
  
    return "YES"; 
}

int main()
{
	int t;
	string a,b,w;
	cin>>t;
	while(t--)
	{
		cin>>w;
		a=w.substr(0,w.length()/2);
		if(w.length()%2)
			b=w.substr(w.length()/2+1,w.length());
		else
			b=w.substr(w.length()/2,w.length());
		cout<<compare(a,b)<<endl;
	}
	return 0;
}