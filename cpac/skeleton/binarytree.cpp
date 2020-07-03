#include<bits/stdc++.h>
#include<stdio.h>
#include<conio.h>
using namespace std;

struct btree{
	int val;
	struct btree *left;
	struct btree *right;
};

int smallest(struct btree *r){
	if(r==NULL||r->left==NULL)
		return r->val;
	else
		return smallest(r->left);
}

int greatest(struct btree *r){
	if(r==NULL||r->right==NULL)
		return r->val;
	else
		return greatest(r->right);
}

int search(struct btree *r, int val){
	if(r==NULL)
		return -1;
	if(val<r->val)
		return search(r->left,val);
	if(val>r->val)
		return search(r->right,val);
	else
		return r->val;
}

struct btree* insert(struct btree *r, int val){
	if(r==NULL){
		r=(struct btree*)malloc(sizeof(struct btree*));
		r->val=val;
		r->left=r->right=NULL;
	}
	else{
		if(val<r->val)
			r->left=insert(r->left,val);
		if(val>r->val)
			r->right=insert(r->right,val);
	}
	return r;
}

int main(){
	return 0;
}
