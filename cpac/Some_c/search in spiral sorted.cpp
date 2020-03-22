#include <iostream>
#define n 6
using namespace std;

int getring(int s,int a[][n])
{
    for(int i=0;i<n/2;i++)
    {
        if(s>=a[i][i] && s<=a[i+1][i])
            return i;
    }
}

void rowsearchinc(int a[][n],int row,int r,int c,int s)
{
    while(c>=r)
    {
        int mid=r+(c-r)/2;
        if(a[row][mid]==s)
        {
            cout<<"Row:"<<r-1<<" Column:"<<c;
            return;
        }
        if(a[row][mid]>s)
            return rowsearchinc(a,row,r,mid-1,s);
        return rowsearchinc(a,row,mid+1,c,s);
    }
}

void colsearchinc(int a[][n],int col,int r,int c,int s)
{
    while(c>=r)
    {
        int mid=r+(c-r)/2;
        if(a[mid][col]==s)
        {
            cout<<"Row:"<<r<<" Column:"<<c;
            return;
        }
        if(a[mid][col]>s)
            return colsearchinc(a,col,r,mid-1,s);
        return colsearchinc(a,col,mid+1,c,s);
    }
}

void huntelement(int s,int a[][n])
{
    int i=getring(s,a);
    if(s>=a[i][i] && s<=a[i][n-i-1])
    {
        rowsearchinc(a,i,i,n-i-1,s);
    }
    else if(s>=a[i][n-i-1] && s<=a[n-i-1][n-i-1])
    {
        colsearchinc(a,n-i-1,i,n-i-1,s);
    }
    else if(s>=a[n-i-1][n-i-1] && s<=a[n-i-1][i])
    {
        rowsearchinc(a,n-i-1,i,n-i-1,s);
    }
    else if(s>=a[n-i-1][i] && s<=a[i+1][i])
    {
        colsearchinc(a,i,i,n-i-1,s);
    }
}

int main()
{
    int s;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter element to be searched:";
    cin>>s;
    if(n%2==0)
    {
        if(s<a[0][0] || s>a[n/2][n/2 -1])
        {
            cout<<"Entered element not in array";
            return 0;
        }
    }
    else if(s<a[0][0] || s>a[n/2][n/2])
    {
        cout<<"Element not in array";
        return 0;
    }
    cout<<"Entered array is:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    huntelement(s,a);
    return 0;
}
