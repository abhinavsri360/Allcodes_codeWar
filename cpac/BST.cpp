#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
using namespace std;

struct tree
{
    int d;
    struct tree *l,*r;
};

struct tree *r=NULL;
struct tree *sm=NULL;
struct tree *l=NULL;
struct tree *temp=NULL;

void insertnode(struct tree *r,struct tree *n)
{
    if(n->d < r->d && r->l==NULL)
        r->l=n;
    else if(n->d >= r->d && r->r==NULL)
        r->r=n;
    else if(n->d < r->d && r->l!=NULL)
        insertnode(r->l,n);
    else if(n->d >= r->d && r->r!=NULL)
        insertnode(r->r,n);
}

void inorder(struct tree *r)
{
    if(r!=NULL)
    {
        inorder(r->l);
        cout<<r->d<<" ";
        inorder(r->r);
    }
}

void preorder(struct tree *r)
{
    if(r!=NULL)
    {
        cout<<r->d<<" ";
        preorder(r->l);
        preorder(r->r);
    }
}

void postorder(struct tree *r)
{
    if(r!=NULL)
    {
        postorder(r->l);
        postorder(r->r);
        cout<<r->d<<" ";
    }
}

struct tree* smallest(struct tree *r)
{
    if(r->l==NULL)
    {
        cout<<r->d;
        return r;
    }
    else
        smallest(r->l);
}

struct tree* greatest(struct tree *r)
{
    if(r->r==NULL)
    {
        cout<<r->d;
        return r;
    }
    else
        greatest(r->r);
}

void searchbst(struct tree *r,int s)
{
    if(r==NULL)
        cout<<"Not found";
    else if(s<r->d)
        searchbst(r->l,s);
    else if(s>r->d)
        searchbst(r->r,s);
    else
        cout<<"Key found";
}

struct tree* deletekey(int x,struct tree* t)
{
	if(t == NULL)
        cout<<"\nElement not found";
	else
	{
		if(x < t->d)
			t->l = deletekey(x, t->l);
		else if(x > t->d)
				t->r = deletekey(x, t->r);
        else
        {
            if(t->l && t->r)
            {
                temp = smallest(t->r);
                t->d = temp->d;
                t->r = deletekey(t->d,t->r);
            }
            else
            if(t->l == NULL)
            {
                temp = t;
                t=t->r;
                free (temp);
                cout<<'\n';
            }
            else
            {
                temp = t;
                t=t->l;
                free (temp);
                cout<<'\n';
            }
        }
    }
    return t;
}

int main()
{
    struct tree *n;
    char a;
    int s;
    do
    {
        n=(struct tree*)malloc(sizeof(struct tree));
        n->l=NULL;
        n->r=NULL;
        cout<<"Enter node value";
        cin>>n->d;
        if(r!=NULL)
            insertnode(r,n);
        else
            r=n;
        cout<<"Do you want to insert another node?";
        cin>>a;
    }while(a=='y'||a=='Y');
    preorder(r);cout<<'\n';
    inorder(r);cout<<'\n';
    postorder(r);cout<<'\n';
    smallest(r);cout<<'\n';
    greatest(r);cout<<'\n';
    cout<<"Enter node to be searched:";
    cin>>s;
    searchbst(r,s);
    cout<<"Enter key to be deleted:";
    cin>>s;
    deletekey(s,r);
    inorder(r);
}
