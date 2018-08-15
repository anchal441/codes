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
int search(int arr[], int strt, int end, char value)
{
  int i;
  for(i = strt; i <= end; i++)
  {
    if(arr[i] == value)
      return i;
  }
}

node *build_tree(int post[],int in[],int be,int en){
	static int index=en;
	if(be>en)
		return(NULL);
	node *root=new node(post[index--]);
	if(be==en){
		return(root);
	}
	else{
		int inIndex=search(in,be,en,root->data);
		root->right=build_tree(post,in,inIndex+1,en);
		root->left=build_tree(post,in,be,inIndex-1);
		
	}
	return(root);
}


void Print(node *root){
	if(root==NULL)
		return;
	(root->left!=NULL?cout<<root->left->data:cout<<"END");cout<<" => "<<root->data<<" <= ";(root->right!=NULL?cout<<root->right->data:cout<<"END");cout<<endl;
	Print(root->left);
	Print(root->right);

}


int main(){
	node*root=NULL;
	int a;
	cin>>a;
	int post[a];
	for(int i=0;i<a;i++){
		cin>>post[i];
	}
	cin>>a;
	int in[a];
	for(int i=0;i<a;i++){
		cin>>in[i];
	}
	root=build_tree(post,in,0,a-1);
	Print(root);

}