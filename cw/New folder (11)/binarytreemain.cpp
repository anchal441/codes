#include <iostream>
#include "binarytree.h"
using namespace std;
int cntNodes(Node* root){
	if(root==NULL){
		return 0;
	}
	int leftcnt=cntNodes(root->left);
	int rgtcnt=cntNodes(root->right);
	int curcnt=leftcnt+1+rgtcnt;
	return curcnt;
}
int main(){
	Node * root=NULL;
int ans=cntNodes(root);
cout<<ans<<endl;



}