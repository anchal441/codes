#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next;

    ///Init List
    node(int d):data(d),next(NULL){}

    int operator[](int p){
        if(p==0){
            return data;
        }
        else{
            ///Take P-1 Jumps
            node*temp = next;
            int jump=1;
            while(jump<=p-1){
                jump++;
                temp = temp->next;
            }
            return temp->data;
        }

    }
   // ~node(){
     //   cout<<"Deleting node with "<<data<<endl;
       // if(next!=NULL){
         //   delete next;
        //}
    //}
};

void InsertAtHead(node *&head,int data){
    node *temp=new node(data);
    temp->next=head;
    head=temp;
}

void InsertAtMiddle(node *&head,int data,int n){
    node *temp=new node(data);
    if(n==1){
        temp->next=head;
        head=temp;
    }
    else{
        node *temp1=head;
        for(int i=0;i<=n-2;i++){
            temp1=temp1->next;
        }
        temp->next=temp1->next;
        temp1->next=temp;
    }
}
void InsertAtEnd(node *&head,int data){
    if(head==NULL){
        InsertAtHead(head,data);
        return;
    }
    node *temp1=new node(data);
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=temp1;
    temp1->next=NULL;
}

void Delete(node *&head,int p){
    if(p==0){
        
        node *temp=head;
        head=head->next;
        delete temp;
    }
    else{
       
        node *temp1=head;
         for(int i=0;i<p-1;i++){
           temp1=temp1->next;
        }
        node *temp2=temp1->next;
        temp1->next=temp2->next;
        delete temp2;
        
    }
}
void takeInput(node *&head){
    int n;
    cin>>n;
    while(n!=-1){
        InsertAtHead(head,n);
        cin>>n;
    }
}
void Print(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int length(node *head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return(count);
}


node* search(node *head,int data){
    if(head==NULL){
        return(head);
    }
    else{
        if(head->data==data){
            return(head);
        }
        else{
            return(search(head->next,data));
        }
    }
}

int main(){
    int n,q;
    cin>>n>>q;
    int x;
    node *head=NULL;
    while(n--){
        cin>>x;
        
        InsertAtEnd(head,x);
    }

    while(q--){
        cin>>x;
        Delete(head,x);
        Print(head);
    }

}





