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

int length(node *head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return(count);
}

void Print(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
node* FindMid(node *head){
    if(head==NULL||head->next==NULL)
        return(head);
    node *slow=head,*fast=head->next;
    while(fast&&fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return(slow);
}

void bubblesort(node *&head){
    if(head==NULL||head->next==NULL){
        return;
    }
    node *current=head;
    int a=length(head);
    node *temp1;
    for(int i=0;i<a-1;i++){
        node *current=head,*prev=NULL;
        while(current->next!=NULL){
            if(current->data>current->next->data){
                if(current==head){
                    temp1=current->next;
                    current->next=temp1->next;
                    temp1->next=current;
                    head=temp1;
                    prev=temp1;
                }
                else{
                   temp1 = current->next;
                   current->next=temp1->next;
                   temp1->next=current;
                   prev->next=temp1;
                   prev=temp1;
                }
            }
            else{
                prev=current;
                current=current->next;
            }

        }
    }
}
int main(){
    
    int m;
    cin>>m;
    int x;
    node *head=NULL;
    while(m--){
        cin>>x;
        InsertAtEnd(head,x);
    }

    bubblesort(head);
    Print(head);

}





