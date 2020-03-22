#include <iostream>
#include <malloc.h>
#include <stdio.h>
using namespace std;
//1 7 2 15 35 40 29 11
struct tree
{
    int d;
    struct tree *l,*r;
};

struct tree *r=NULL;
struct tree *t;

void insertnode(struct tree *r,struct tree *n)
{
    if(n->d < r->d && r->l==NULL)
        r->l=n;
    else if(n->d >= r->d && r->r==NULL)
        r->r=n;
    else if(n->d < r->d && r->l!=NULL)
    {
        t=(struct tree*)malloc(sizeof(struct tree));
        t->l=NULL;
        t->r=NULL;
        t->d=r->l->d;
    }
}

void postorder(struct tree *r)
{
    if(r!=NULL)
    {
        postorder(r->l);
        postorder(r->r);
        cout<<r->d;
    }
}

int main()
{
    int n,i,j,t;
    struct tree *e;
    cout<<"length of array:";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    e=(struct tree*)malloc(sizeof(struct tree));
    e->l=NULL;
    e->r=NULL;
    e->d=a[n-1];
    if(r!=NULL)
        insertnode(r,e);
    else
        r=e;
    for(i=0;i<n-1;i++)
    {
        e=(struct tree*)malloc(sizeof(struct tree));
        e->l=NULL;
        e->r=NULL;
        e->d=a[i];
        if(r!=NULL)
            insertnode(r,e);
        else
            r=e;
    }
    postorder(r);
    return 0;
}
