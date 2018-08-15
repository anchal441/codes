#include <iostream>
#include "stackimplementation.h"
using namespace std;
int main(){
	stack s;
	s.push(2);
	s.push(4);
	s.pop();
	cout<<s.size()<<endl;
	s.push(6);
	s.pop();
	s.size();
	cout<<s.top();
}
