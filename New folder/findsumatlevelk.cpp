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

void levelOrderPrint(node*root){
   queue<node*> q;
   q.push(root);
   q.push(NULL);

   while(!q.empty()){
        node*f = q.front();
        q.pop();
        if(f==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<< f->data<<" ";
            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
   }
}
node* GenericInput(stack<node*> &q){
	int d,n;
	cin>>d;
	node *root=NULL;
	root=new node(d);
	q.push(root);
	cin>>n;
	if(n>0){
		root->left=GenericInput(q);
		n--;
	}
	else { 
		root->left=NULL;
	}
	if(n>0){
	    root->right=GenericInput(q);
	    n--;
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
int SumAtLevelK(node *root,int k){
	if(root==NULL){
		return 0;
	}
	if(k==0){
		return(root->data);
	}
	return(SumAtLevelK(root->left,k-1)+SumAtLevelK(root->right,k-1));

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
	root=GenericInput(s);
	//levelOrderPrint(root);
	int k;
	cin>>k;
	cout<<SumAtLevelK(root,k)<<endl;

}