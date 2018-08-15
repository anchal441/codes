#include <iostream>
#include "bst.h"
using namespace std;
void printkk(BSTNode* root,int k1,int k2){
	if(root==NULL){
		return;
	}

	if(root->data >=k1 && root->data <=k2){
		cout<<root->data<<" " ;
	}
	BSTNode* root=createBST();
	//inorder(root);
	printkk(root,k1,k2);
}
