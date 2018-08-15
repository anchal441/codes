#ifndef QUEUE_H_
#define QUEUE_H_

class queue{
public:
class Node{
	int data;
	Node* next;
public:
	int data ;
	Node* next;
	Node(int d){
		data =d;
		next=NULL;
		
	};

	int size;
	Node* front;
	Node* rear;
public:
	queue(){
		front =NULL;
		rear=NULL;
		size=0;
	}
}
int getsize(){
	return size;

}
void push(int d){
	Node* newNode=new Node(d);
	++size;
	if(front==NULL){
		front=rear=newNode;
		return;
	}
	rear->next=newNode;
	rear=rear->next;
}
void pop(){
	if(empty()){
		return;
	}
	Node* tmp=front->next;
	delete front;
	--size;
	if(size==0) rear=NULL;

	front=tmp;
}
};
int main(){
	queue q;
	q.push(1);
	q.push(2);

	cout<<q.getfront()<<endl;
	q.push(3);
	cout<<
}
#endif