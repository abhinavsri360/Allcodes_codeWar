#include <iostream>
#include <malloc.h>
using namespace std;

struct tree
{
    int d;
    struct tree *l;
    struct tree *r;
};

struct tree *r1=NULL;
struct tree *r2=NULL;

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

int compare(struct tree *r1,struct tree *r2)
{
    if(r1==NULL && r2==NULL)
        return 1;
    return (r1 && r2) && (r1->d == r2->d) && compare(r1->l,r2->l) && compare(r1->r,r2->r);
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
    int i=0,j=0;
    cout<<"Tree One"<<'\n';
    do
    {
        n=(struct tree*)malloc(sizeof(struct tree));
        n->l=NULL;
        n->r=NULL;
        cout<<"Enter node value:";
        cin>>n->d;
        if(r1==NULL)
            r1=n;
        else
            insertn(r1,n);
        i++;
        cout<<"Do you wish to continue?";
        cin>>a;
    }while(a=='y'||a=='Y');
    cout<<"Tree two"<<'\n';
    do
    {
        n=(struct tree*)malloc(sizeof(struct tree));
        n->l=NULL;
        n->r=NULL;
        cout<<"Enter node value:";
        cin>>n->d;
        if(r2==NULL)
            r2=n;
        else
            insertn(r2,n);
        j++;
        cout<<"Do you wish to continue?";
        cin>>a;
    }while(a=='y'||a=='Y');
    if(compare(r1,r2))
        cout<<"Identical";
    else
        cout<<"Not Identical";
    traverse(r1);
    traverse(r2);
}
