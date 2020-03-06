#include <iostream>
#include <malloc.h>
using namespace std;

struct tree
{
    int d;
    struct tree *l;
    struct tree *r;
};

struct tree *r=NULL;

void insertn(struct tree *r,struct tree *n)
{
    int c;
    cout<<"0 for left and 1 for right";
    cin>>c;
    if(c==1)
    {
        if(r->r==NULL)
            r->r=n;
        else
            insertn(r->r,n);
    }
    else
    {
        if(r->l==NULL)
            r->l=n;
        else
            insertn(r->l,n);
    }
}

void traverse(struct tree *r)
{
    if(r!=NULL)
    {
        traverse(r->l);
        cout<<r->d;
        traverse(r->r);
    }
}

int main()
{
    struct tree *n;
    char a;
    do
    {
        n=(struct tree*)malloc(sizeof(struct tree));
        n->l=NULL;
        n->r=NULL;
        cout<<"Enter node value:";
        cin>>n->d;
        if(r==NULL)
            r=n;
        else
            insertn(r,n);

        cout<<"Do you wish to continue?";
        cin>>a;
    }while(a=='y'||a=='Y');
    traverse(r);
}
