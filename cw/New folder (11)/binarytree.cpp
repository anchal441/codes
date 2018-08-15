#ifndef _BINARY_TREE_H
#define _BINARY_TREE_H
#include <iostream>
#include <cmath>
#include <utility>
#include <bits/stdc++.h>
using namespace std;


class Node{
public:
	int data;
	Node * left;
	Node * right;
	Node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};
Node* createTree(){
	int d;
	cin>>d;
	if(d==-1){
		return NULL;

	}

	Node* root= new Node(d);
	root->left=createTree();
	root->right=createTree();
	cout<<endl;


}
void preOrder(Node * root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);

}
Node * findnode(Node* root,int n){
	if(root==NULL){
		return NULL;
	}
	if(root->data==n){
		return root;
	}
	findnode(root->left,n);
	findnode(root->right,n);

}

int height(Node* root){
	if(root==NULL){
		return 0;
	}

	return max(height(root->left),height(root->right))+1;
}
Node* levelOrderInput(){
	int d;
	cin>>d;
	if(d==-1){
		return NULL;
	}
	Node* root= new Node(d);
	queue <Node*> q;
	q.push(root);
	while(q.empty()==false){
		Node * cur=q.front();
		q.pop();
		cin>>d;
		if(d!=-1){
			cur->left=new Node(d);
			q.push(cur->left);
		}
		cin>>d;
		if(d!=-1){
			cur->right=new Node(d);
			q.push(cur->right);
		}
	}
	return root;
}
void printLevel(Node* root){
	if(root==NULL){
		return;
	}
	queue<Node*> q;
	q.push(root);
	while(q.empty()==false){
		Node* cur=q.front();
		q.pop();
		cout<<
	}
}



int diameter(Node* root){
	if(root==NULL){
		return 0;
	}
	int lftdia=diameter(root->left);
	int rgtdia=diameter(root->right);
	int curdia=height(root->left)+1+height(root->right);
	return max(curdia,max(lftdia,rgtdia));
}


int main(){
	//Node * root=NULL;
//int ans=cntNodes(root);
//cout<<ans<<endl;
	Node * root=createTree();

	preOrder(root);

int ans2=diameter(root);
cout<<ans2;


}


#endif
