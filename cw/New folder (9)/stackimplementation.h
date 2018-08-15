#ifndef STACK_H_
#define STACK_H_
class stack{
	public:
	int * arr;
	int top_i;
public:
stack(){
	arr=new int[100];
	top_i=-1;
}

~stack(){
	delete [] arr;
}
bool empty(){
	return top_i ==-1;
}
int size(){
	return top_i+1;
}
void push(int x){
	if(top_i<100){
		++top_i;
		arr[top_i]=x;
		}
}
	void pop(){
		if (empty()) return;
		--top_i;
	}
	int top(){
		if(!empty()){
			return arr[top_i];
		}
	}
};

#endif