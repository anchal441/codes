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



void rev(node *&head){
    node*prev=NULL,*next,*current;
    current=head;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}
int main(){
    int n;
    cin>>n;
    int x;
    node *head=NULL;
    while(n--){
        cin>>x;
        
        InsertAtEnd(head,x);
    }

    rev(head);
    Print(head);
    

}





