/*
Problem
Vestigium means "trace" in Latin. In this problem we work with Latin squares and matrix traces.

The trace of a square matrix is the sum of the values on the main diagonal (which runs from the upper left to the lower right).

An N-by-N square matrix is a Latin square if each cell contains one of N different values, and no value is repeated within a row or a column. In this problem, we will deal only with "natural Latin squares" in which the N values are the integers between 1 and N.

Given a matrix that contains only integers between 1 and N, we want to compute its trace and check whether it is a natural Latin square. To give some additional information, instead of simply telling us whether the matrix is a natural Latin square or not, please compute the number of rows and the number of columns that contain repeated values.

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each starts with a line containing a single integer N: the size of the matrix to explore. Then, N lines follow. The i-th of these lines contains N integers Mi,1, Mi,2 ..., Mi,N. Mi,j is the integer in the i-th row and j-th column of the matrix.

Output
For each test case, output one line containing Case #x: k r c, where x is the test case number (starting from 1), k is the trace of the matrix, r is the number of rows of the matrix that contain repeated elements, and c is the number of columns of the matrix that contain repeated elements.

Limits
Test set 1 (Visible Verdict)
Time limit: 20 seconds per test set.
Memory limit: 1GB.
1 ≤ T ≤ 100.
2 ≤ N ≤ 100.
1 ≤ Mi,j ≤ N, for all i, j.

Sample

Input
 	
Output
 
3
4
1 2 3 4
2 1 4 3
3 4 1 2
4 3 2 1
4
2 2 2 2
2 3 2 3
2 2 2 3
2 2 2 2
3
2 1 3
1 3 2
1 2 3

  
Case #1: 4 0 0
Case #2: 9 4 4
Case #3: 8 0 2

  
In Sample Case #1, the input is a natural Latin square, which means no row or column has repeated elements. All four values in the main diagonal are 1, and so the trace (their sum) is 4.

In Sample Case #2, all rows and columns have repeated elements. Notice that each row or column with repeated elements is counted only once regardless of the number of elements that are repeated or how often they are repeated within the row or column. In addition, notice that some integers in the range 1 through N may be absent from the input.

In Sample Case #3, the leftmost and rightmost columns have repeated elements.
*/
#include<bits/stdc++.h>
using namespace std;

int rowrepeat(int n,int *a)
{
	int r=0;
	int b[n];
	for(int k=0;k<n;k++)
		b[k]=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(++b[*((a+i*n) + j)-1] >= 2)
			{
				r++;
				break;
			}
			else
				b[*((a+i*n) + j)-1]++;
		}
		for(int k=0;k<n;k++)
			b[k]=0;
	}
	return r;
}

int colrepeat(int n,int *a)
{
	int c=0;
	int b[n];
	for(int i=0;i<n;i++)
		b[i]=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(++b[*((a+j*n) + i)-1] >= 2)
			{
				c++;
				break;
			}
			else
				b[*((a+j*n) + i)-1]++;
		}
		for(int k=0;k<n;k++)
			b[k]=0;
	}
	return c;
}

int trace(int n,int *a)
{
	int s=0;
	for(int i=0;i<n;i++)
		s+=*((a+i*n) + i);
	return s;
}

int main()
{
	int n,t;
	cin>>t;
	t++;
	for(int i=1;i<t;i++)
	{
		cin>>n;
		int a[n][n];
		for(int j=0;j<n;j++)
			for(int k=0;k<n;k++)
				cin>>a[j][k];
		cout<<"Case #"<<i<<": "<<trace(n,(int *)a)<<" "<<rowrepeat(n,(int *)a)<<" "<<colrepeat(n,(int *)a)<<endl;
	}
	return 0;
}