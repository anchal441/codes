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

pair<int,bool> IsBalance(node *root){
	pair<int,bool> p;
	if(root==NULL){
		p.first=0;
		p.second=true;
		return(p);
	}
	pair<int,bool> left=IsBalance(root->left);
	pair<int,bool>right=IsBalance(root->right);
    p.first=max(left.first,right.first)+1;
	if(left.second&&right.second&&abs(left.first-right.first)<=1)
	{
		p.second=true;
	}
	else{
		p.second=false;
	}
	return(p);
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
	if(IsBalance(root).second)
		cout<<"true"<<endl;
	else{
		cout<<"false"<<endl;
	}
}