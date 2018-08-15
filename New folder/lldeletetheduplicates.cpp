#include<iostream>
using namespace std;
int arr[100],i=0;
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

void InsertAtEnd(node *&head,int data){
    if(head==NULL){
      node *temp1=new node(data);
    head=temp1;
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

void duplicates(node *head){
    while(head->next!=NULL){
        if(head->data==head->next->data){
            node *temp=head->next;
            head->next=temp->next;
            delete temp;
        }
        else{
            head=head->next;
        }
    }
}


int main(){
    int t;
    cin>>t;
    while(t--){int n;
    cin>>n;
    int x;
    node *head=NULL;
    while(n--){
        cin>>x;
        
        InsertAtEnd(head,x);
    }

    duplicates(head);
    Print(head);}

}





