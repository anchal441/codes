#include <iostream>
using namespace std;

class Node{
public:	
	int data;
	Node * next;
	Node(int d){
		data = d;
		next=NULL;
	}
};

void printLL(Node* head){
	Node * cur =head;
	while(cur !=NULL){
		cout<<cur->data<<"-->";
		cur = cur->next;
	}
}

Node* insert(Node* head,int d){
	Node* tmp=new Node(d);
	if(head==NULL){
		//empty list
		return tmp;
	}

	//(*tmp).next=head;
	tmp->next=head;
	return tmp;

}

Node* createlist(int n){
	Node * head = NULL;
	for(int i=0;i<n;i++){
			int x;
			cin>>x;
		if(x==-1){
		break;
		}
		else{
		
		head=insert(head,x);
	}
	}
	return head;
}

Node * createlist(){
	Node *head=NULL;
	int x;
	cin>>x;
	while(true){
		cin>>x;
		if(x==-1){
			break;
		}
		head=insert(head,x);
		
	}
	return head;
} 

Node * deleteNode(Node* head,int d){
	Node* prev=NULL;
	Node* cur=head;

	while(cur!=NULL){
		if(cur->data==d){
			if(prev==NULL){
				//head to be deleted
				Node *tmp=cur->next;
				delete cur;
				return tmp;
			}
			else{
				prev->next=cur->next;
				delete cur;
			}
		}

	}
	prev=cur;
	cur->next;
	return head;
}

int lengthNode(Node* head){
	Node* cur=head;
	int count=0;
	while(cur!=NULL){
		count++;
		cur=cur->next;
	}
	return count;

}


int main(){
	Node * head= NULL;
	int n;
	
	head=createlist(n);
	printLL(head);
	
	cin>>n;
	head=deleteNode(head,n);
	printLL(head);
	lengthNode(head);

}