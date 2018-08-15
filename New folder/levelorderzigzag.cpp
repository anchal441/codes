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

void ZigzagPrint(node*root){
   stack<node*>s1;
   stack<node*>s2;
   s1.push(root);
   while(1){
    while(!s1.empty()){
        node*f = s1.top();
        s1.pop();
        cout<< f->data<<" ";
        if(f->left){
           s2.push(f->left);
        }
        if(f->right){
            s2.push(f->right);
        }
   }
   while(!s2.empty()){
        node*f = s2.top();
        s2.pop();
        cout<< f->data<<" ";
        if(f->right){
            s1.push(f->right);
        }
        if(f->left){
           s1.push(f->left);
        }
   }
   if(s2.empty()&&s1.empty())
   	break;
  }
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
	root=build_postorder(s);
	ZigzagPrint(root);

}