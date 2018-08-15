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
void Print(node *root){
	if(root==NULL)
		return;
	(root->left!=NULL?cout<<root->left->data:cout<<"END");cout<<" => "<<root->data<<" <= ";(root->right!=NULL?cout<<root->right->data:cout<<"END");cout<<endl;
	Print(root->left);
	Print(root->right);

}
void Print1(node *root){
	if(root==NULL){
		return;
	}
	Print1(root->left);
	cout<<root->data<<" ";
	Print1(root->right);
}
node* Search(node *root,int data){
	if(root==NULL){
		return(root);
	}
	else if(root->data==data){
		return(root);
	}
	else if(root->data<data){
		return(Search(root->right,data));
	}
	else{
		return(Search(root->left,data));
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
node *FindMinInRight(node *temp){
	while(temp->left!=NULL){
		temp=temp->left;
	}
	return(temp);
}
node *Delete(node *root,int data){
	if(root==NULL){
		return(root);
	}
	else if(root->data<data){
		root->right=Delete(root->right,data);
	}
	else if(root->data>=data){
		root->left=Delete(root->left,data);
	}
	else if(root->data==data){
		if(root->left==NULL&&root->right==NULL){
			delete(root);
			return(NULL);
		}
		else if(root->left==NULL){
			node *temp=root->right;
			delete(root);
			return(temp);
		}
		else if(root->right==NULL){
			node *temp=root->left;
			delete(root);
			return(temp);
		}
		else{
			node *temp=FindMinInRight(root->right);
			root->data=temp->data;
			root->right=Delete(root->right,temp->data);
		}

	}

}
void AddDuplicates(node* root){
	if(root==NULL){
		return ;
	}
	node *temp=new node(root->data);
	temp->left=root->left;
	root->left=temp;
	AddDuplicates(root->left->left);
	AddDuplicates(root->right);
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
//	Print1(root);
	AddDuplicates(root);
	Print(root);
	
}