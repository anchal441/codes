#ifndef _BST_H
#define _BST_H
#include <iostream>
using namespace std;

class BSTNode{   //struct by default public
public:
	int data;
	BSTNode* left;
	BSTNode* right;
	BSTNode(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};

BST* insertInBST(int d){
	if(root==NULL){
		//insertion in empty tree
		Node* newnode= new Node(d);
		return newnode;
	}
	if(d<root->data){
		BSTNode* updatedTree=insertInBST(root->left,d);
		root->left=updatedTree;
	}
	else{
		root->right=insertInBST(root->right,d);
	}
	return root;
}

void printBST(BSTNode* root){
	if(root==NULL){
		return;
	}
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}

BSTNode* createBST(){
	int d;
	BSTNode* root=NULL;

	while(cin>>d && d != -1){
		root=insertInBST(d);

	}
	return root;
}
Node* levelOrderInput() {
	int d;
	cin >> d;
	if (d == -1) {
		return NULL;
	}

	Node* root = new Node(d);
	queue<Node *> q;	//queue of Node*
	q.push(root);
	while (q.empty() == false) {
		Node * cur = q.front();
		q.pop();

		cin >> d;
		if (d != -1) {
			cur->left = new Node(d);
			q.push(cur->left);
		}

		cin >> d;
		if (d != -1) {
			cur->right = new Node(d);
			q.push(cur->right);
		}
	}

	return root;
}
