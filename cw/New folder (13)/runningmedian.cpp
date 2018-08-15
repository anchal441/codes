#include <iostream>
using namespace std;
class compare{
public:
	bool operator()(int a,int b){
		return a>b;
	}
}
void input(priority_queue<int> q1,priority_queue<int,vector<int>,compare> q2){
	int n;
	cin>>n;
}

int main(){
	priority_queue<int> q1;
	priority_queue<int,vector<int>,compare> q2;
	input(q1,q2);

}