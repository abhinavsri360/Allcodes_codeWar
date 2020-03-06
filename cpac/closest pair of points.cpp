#include<bits/stdc++.h>
using namespace std;

struct point
{
    int x,y;
};

float comparex(point a,point b)
{
    return (a.x>b.x);
}

float comparey(point a,point b)
{
    return (a.y>b.y);
}

float mini(float a,float b)
{
    return(a<b)?a:b;
}

float dist(point a,point b)
{
    return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
}

float findminimum(point xsorted[],int n)
{
    float m=9999;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(dist(xsorted[i],xsorted[j])<m)
                m=dist(xsorted[i],xsorted[j]);
        }
    }
    return m;
}

float closetostrip(point strip[],int s,float d)
{
    float m=d;
    for(int i=0;i<s;i++)
    {
        for(int j=i+1;j<s && (strip[j].y-strip[i].y)<m;++j)
        {
            if(dist(strip[i],strip[j])<m)
                m=dist(strip[i],strip[j]);
        }
    }
    return m;
}

float findclosestpoint(point xsorted[],point ysorted[],int n)
{
    if(n<=3)
        return findminimum(xsorted,n);
    int mid=n/2;
    point midpoint=xsorted[mid];
    point ysortleft[mid+1];
    point ysortright[n-mid+1];
    int leftindex=0,rightindex=0;

    for(int i=0;i<n;i++)
    {
        if(ysorted[i].x<=midpoint.x)
            ysortleft[leftindex++]=ysorted[i];
        else
            ysortright[rightindex++]=ysorted[i];
    }
    float leftdist=findclosestpoint(xsorted,ysortleft,mid);
    float rightdist=findclosestpoint(ysorted+mid,ysortright,n-mid);
    float dist=mini(leftdist,rightdist);

    point strip[n];
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(abs(ysorted[i].x-midpoint.x)<dist)
            strip[j++]=ysorted[i];
    }
    return mini(dist,closetostrip(strip,j,dist));
}

float closestpoints(point p[],int n)
{
    point xsorted[n];
    point ysorted[n];
    for(int i=0;i<n;i++)
    {
        xsorted[i]=p[i];
        ysorted[i]=p[i];
    }
    sort(xsorted,xsorted+n,comparex);
    sort(ysorted,ysorted+n,comparey);

    return findclosestpoint(xsorted,ysorted,n);
}

int main()
{
    int n;
    cout<<"Enter number of points to be entered:";
    cin>>n;
    point p[n];
    for(int i=0;i<n;i++)
    {
        cout<<"X-coordinate:";
        cin>>p[i].x;
        cout<<"Y-coordinate:";
        cin>>p[i].y;
    }
    cout<<"Minimum distance between points is:"<<closestpoints(p,n);
    return 0;
}
