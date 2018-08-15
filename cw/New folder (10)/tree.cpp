#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	int nchild;
	Node ** childArr;
	Node(int d,int n){
		data=d;



		nChild=n;
		childArr=NULL;
	}

	
};
void postorder(Node * root){
	if(root==NULL){
		return;
	}

	for(int i=0;i<root->nchild;++i){
		postorder(root->childArr[i]);
	}
	cout<<root->data;
}
int findLargest(Node* root){
	static const int inf= 10000;
	if(root==NULL){
		return-inf;
	}
	int res=root->data
}
Node* createTree(){
	int d,n;
	cin>>d;
	if(d==-1){
		return NULL;

	}
	cin>>n;
	Node* newNode=new Node(d,n);
	for(int i=0;i<nchild;i++){
		newNode->childArr[i]=createTree();
	}
	return root;
}
void printTree(Node * root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	for(int i=0;i< root->nchild;++i){
		printTree(root->childArr[i]);
	}
}
int main(){
	Node * root=NULL;
	root= createTree;
}