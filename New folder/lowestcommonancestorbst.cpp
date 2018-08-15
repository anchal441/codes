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


int Search(node *root,int a,int b){
	if(root==NULL){
		return(-1);
	}
	else if(root->data<=b&&root->data>=a){
		return(root->data);
	}
	else if(root->data<b){
		return(Search(root->right,a,b));
	}
	else{
		return(Search(root->left,a,b));
	}
}


node* Insert(node *root,int data){
	if(root==NULL){
		root=new node(data);
		return(root);
	}
	else if(root->data<data){
		root->right=Insert(root->right,data);
	}
	else{
		root->left=Insert(root->left,data);
	}
	return(root);

}

int main(){
	node *root=NULL;
	int n;
	cin>>n;
	int data;
	while(n--){
		cin>>data;
		root=Insert(root,data);
	}
	int a,b;
	cin>>a>>b;
	cout<<Search(root,min(a,b),max(a,b))<<endl;
	
}