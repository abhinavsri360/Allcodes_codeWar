#include <iostream>
using namespace std;

int maximum(int a)
{
    if(a>=20)
        return 20;
    else if(a>=10)
        return 10;
    else if(a>=5)
        return 5;
    else if(a>=2)
        return 2;
    else if(a>=1)
        return 1;
}

int main()
{
    int n,t;
    cout<<"Enter the amount to be paid:";
    cin>>n;
    while(n>0)
    {
        t=maximum(n);
        cout<<"Paid "<<t<<"$"<<endl;
        n=n-t;
    }
    return 0;
}
