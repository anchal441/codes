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

void Print(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}



node*merge(node* head1,node* head2){
    
    if(head1==NULL){
        return(head2);
    }
    else if(head2==NULL){
        return(head1);
    }
    node *head;
    if(head1->data < head2->data){
        head=head1;
        head->next= merge(head1->next,head2);
    }
    else {
        head=head2;
        head->next=merge(head1,head2->next);
    }
    return(head);

}
int main(){
    int m,n;
    cin>>m>>n;
    int x;
    node *head1=NULL;
    node *head2=NULL;
    node *head=NULL;
    while(m--){
        cin>>x;
        InsertAtEnd(head1,x);
    }
    while(n--){
        cin>>x;
        InsertAtEnd(head2,x);
    }

    head=merge(head1,head2);
    Print(head);

}
