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