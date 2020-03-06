#include <iostream>
#include <malloc.h>
#include <stdlib.h>
using namespace std;

int partition(int *a,int start,int end)
{
    int pivot=a[end];
    int P_index=start;
    int i,t;
    for(i=start;i<end;i++)
    {
    	if(a[i]<=pivot)
        {
            t=a[i];
            a[i]=a[P_index];
            a[P_index]=t;
            P_index++;
        }
     }
      t=a[end];
      a[end]=a[P_index];
      a[P_index]=t;
     return P_index;
 }
 void Quicksort(int *a,int start,int end)
 {
    if(start<end)
    {
         int P_index=partition(a,start,end);
             Quicksort(a,start,P_index-1);
             Quicksort(a,P_index+1,end);
    }
}

int main()
{
    int n,i,j,c=0,x;
    cout<<"N:";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Quicksort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                c++;
        }
        if(c%2==0)
            i=i+c;
        else
        {
            x=arr[i];
            break;
        }
    }
    return 0;
}
