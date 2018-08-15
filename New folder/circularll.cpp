#include <bits/stdc++.h>
#include <map>
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

node* InsertAtEnd(node *&head,int data){
    if(head==NULL){
        InsertAtHead(head,data);
        return(head);
    }
    node *temp1=new node(data);
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=temp1;
    temp1->next=NULL;
    return(temp1);
}



void Print(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}


void detect_remove_cycle(node *head){
	node *slow=head;
	node *fast=head->next;
	while(fast&&fast->next){
		if(slow==fast){
			break;
		}
		slow=slow->next;
		fast=fast->next->next;
	}
	if(slow==fast){
		slow=head;
		while(slow!=fast->next){
			slow=slow->next;
			fast=fast->next;
		}
		fast->next=NULL;
	}

}
node* FindInHash(map <int,node*> &price,int a){

	if(price.count(a)>0){
        return(price[a]);
    }
    else{
        return(NULL);
    }
}

int main(){
    int n;
    node* head=NULL;
    cin>>n;
    map <int,node*> price;
    node *temp1;
    while(n!=-1){
    	node *temp=FindInHash(price,n);
    	if(temp!=NULL){
    		temp1->next=temp;
    		break;
    	}
    	else{
    		temp1=InsertAtEnd(head,n);
    		price.insert(make_pair<int,node *>(n,temp1));
        }
    	cin>>n;
        
    }
    
//	for (std::map<int,node *>::iterator it=price.begin(); it!=price.end(); ++it){
  //      cout<<it->first <<" - "<<it->second<<endl;
    //}
     
    detect_remove_cycle(head);
     Print(head);
}

