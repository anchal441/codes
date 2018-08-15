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

void PrintLevel(node *root){
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		if(q.front()==NULL){
			q.pop();
			if(q.empty())	break;
			cout<<endl;
			q.push(NULL);
		}
		root=q.front();
		q.pop();
		cout<<root->data<<" ";
		if(root->left!=NULL){
			q.push(root->left);
		}
		if(root->right!=NULL){
			q.push(root->right);
		}
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
	PrintLevel(root);
	
}