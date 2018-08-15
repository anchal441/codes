#include <bits/stdc++.h>
using namespace std;
	class node
{
public:
	int data;
	node *left;
	node *right;
	node(int d):data(d),left(NULL),right(NULL){}

};

void Sibling(node *root){
	if(root==NULL){
		return;
	}
	else if(root->right==NULL&&root->left!=NULL){
		cout<<root->left->data<<" ";
		Sibling(root->left);
	}
	else if(root->left==NULL&&root->right!=NULL){
		cout<<root->right->data<<" ";
		Sibling(root->left);
	}
	else{
		Sibling(root->left);
		Sibling(root->right);
	}

}


node* build_postorder(stack<node*> &q){
	node *root=NULL;
	int d;
	cin>>d;
	bool check;
	root=new node(d);
	q.push(root);
	cin>>boolalpha>>check;
	if(check){
		root->left=build_postorder(q);
	}
	else { 
		root->left=NULL;
	}
	cin>>boolalpha>>check;
	if(check){
	    root->right=build_postorder(q);
	}
	else {
		root->right=NULL;
	}
	q.pop();
	if(q.empty()){
		return(root);
	}
	
	return(root);
}



int main(){
	node *root=NULL;
	stack<node *>s;
	root=build_postorder(s);
	Sibling(root);

}
