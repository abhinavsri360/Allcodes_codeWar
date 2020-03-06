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
    cout<<"0->left---1->right:";
    cin>>c;
    if(c==1)
    {
        if(r->r==NULL)
            r->r=n;
        else
            insertn(r->r,n);
    }
    if(c==0)
    {
        if(r->l==NULL)
            r->l=n;
        else
            insertn(r->l,n);
    }
}

int heightoftree(struct tree *r)
{
    if(r==NULL)
        return 0;
    else
        return 1+max(heightoftree(r->l),heightoftree(r->r));
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
        if(r!=NULL)
            insertn(r,n);
        else
            r=n;
        cout<<"Do you want to continue?";
        cin>>a;
    }while(a=='y'||a=='Y');
    cout<<heightoftree(r);
}

