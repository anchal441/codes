#include <bits/stdc++.h>
using namespace std;
class queu{
	stack<int>s1;
	stack<int>s2;
	public:
	void insert(int data){
	s1.push(data);
}
int Isempty(){
	if(s2.empty()&&s1.empty()){
		return(1);
	}
	else{
		return(0);
	}
}
int dequeue(){
	if(!s2.empty()){
        int x=s2.top();
		s2.pop();
		return(x);
	}
	else if(s2.empty()){
		if(s1.empty()){
			return(-1);
		}
		else{
			while(!s1.empty()){
				s2.push(s1.top());
				s1.pop();
			}
			int x=s2.top();
			s2.pop();
			return(x);
		}

	}
}
};

int main(){
	int n;
	cin>>n;
	queu Q;
	int a=0;
	while(a!=n){
	Q.insert(a);
	a++;
	}
	while(!Q.Isempty()){
		cout<<Q.dequeue()<<" ";
	}
	cout<<endl;

}