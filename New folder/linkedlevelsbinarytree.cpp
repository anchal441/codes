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
class Node{
public:
    int data;
    Node*next;

    Node(int d):data(d),next(NULL){}
};

void InsertAtHead(Node *&head,int data){
    Node *temp=new Node(data);
    temp->next=head;
    head=temp;
}

void InsertAtEnd(Node *&head,int data){
    if(head==NULL){
        InsertAtHead(head,data);
        return;
    }
    Node *temp1=new Node(data);
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=temp1;
    temp1->next=NULL;
}
void Print(Node *head){
	cout<<"[";
    while(head->next!=NULL){
        cout<<head->data<<", ";
        head=head->next;
    }
    cout<<head->data;
    cout<<"]";
}
void Prints(std::vector<Node*> &v,int n){
	cout<<"[";
	for(int i=0;i<n-1;i++){
		Print(v[i]);
		cout<<", ";
	}
	Print(v[n-1]);
	cout<<"]";
}

void levelOrderPrint(node*root){
	vector<Node*>v;
	v.resize(20);
	for(int i=0;i<20;i++){
		v[i]=NULL;
	}
   queue<node*> q;
   q.push(root);
   q.push(NULL);
  int i=0;
   while(!q.empty()){
        node*f = q.front();
        if(f!=NULL)
        InsertAtEnd(v[i],f->data);
        q.pop();
        if(f==NULL){
        	i++;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
   }
   Prints(v,i);

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
	levelOrderPrint(root);
	
}