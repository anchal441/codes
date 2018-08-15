#ifndef STACK_H
#define STACK_H
class stack{
	int * arr;
	int top;
stack(){
	arr=new int[100];
	top=-1;
}

~stack(){
	delete [] arr;
}
bool empty(){
	return top ==-1;
}
int size(){
	return top+1;
}
void push(int x){
	if(top<100){
		++top;
		arr[top]=x;
		}
}
	void pop(){
		if (empty()) return;
		--top;
	}
	int top(){
		if(!empty()){
			return arr[top];
		}
	}
};

#endif