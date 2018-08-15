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
node* build(){
	int n;
	cin>>n;
	bool check;
	node *root=NULL;
	while(n!=-1){
		root=new node(n);
		cin>>check;
		if(check==true)
			root->left=build();
		cin>>check;
		if(check==true)
			root->right=build();
	}
	return(root);
}
void preorder(node *root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);

}
int SumOfNodes(node *root){
	if(root==NULL){
		return(0);
	}
	else{
		return(root->data+SumOfNodes(root->left)+SumOfNodes(root->right));
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
	stack<node*> q;
	root=build_postorder(q);
	cout<<SumOfNodes(root)<<endl;
}