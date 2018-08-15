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
void levelOrderInput(node*&root){

    int d;
    cin>>d;

    root = new node(d);
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* f = q.front();
        q.pop();
        int d1,d2;
        cin>>d1>>d2;
        if(d1!=-1){
            f->left = new node(d1);
            q.push(f->left);
        }
        if(d2!=-1){
            f->right = new node(d2);
            q.push(f->right);
        }
    }
}
void PrintLeafNodes(node *root){
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node *f=q.front();
		q.pop();
		if(f->right==NULL&&f->left==NULL){
			cout<<f->data<<" ";
		}
		if(f->left!=NULL){
			q.push(f->left);
		}
		if(f->right!=NULL){
			q.push(f->right);
		}
	}
}
int main(){
	node *root=NULL;
	levelOrderInput(root);
	PrintLeafNodes(root);

}