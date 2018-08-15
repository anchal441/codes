#include<iostream>
using namespace std;
class node{
public:
    int data;
    int nchild;
    node** childarr;
    node(int d,int n){
        data=d;
        nchild=n;
    childarr= new node *[nchild]; 
}

};
node* createtree(){
    int d,n;
    cin>>d>>n;
    if(d==-1){
     return NULL;
    }
    
    node * root= new node(d,n);

    for(int i=0;i< root->nchild;++i){
        root->childarr[i]=createtree();
    }
    return root;
}

void printree(node* root){
    if(root==NULL) return;

    cout<<root->data<<" ";
    for(int i=0;i<root->nchild;++i){
        printree(root->childarr[i]);
    }
}

void findslargest(node* root,int target,node*&largest){

    if(root==NULL) return ;
        if( root->data > target && root->data <= largest->data ){
            largest=root;
        }
    for(int i=0;i<root->nchild;++i){
        findslargest(root->childarr[i],target,largest);
    }
}

int main(){

node * root=NULL;
root=createtree();
int num;
cin>>num;
node*largest= new node(10000,0);
findslargest(root,num,largest);
cout<<largest->data;

}