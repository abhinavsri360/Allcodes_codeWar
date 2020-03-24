#include<iostream>
using namespace std;

int numberOfSquares(int base) 
{ 
   base = (base - 2); 
   base = base / 2;   
   return base * (base + 1)/2; 
}

int main()
{
	int t,n;
	cin>>t;
	while(t--!=0)
	{
		cin>>n;
		cout<<numberOfSquares(n)<<endl;
	}
	return 0;
}