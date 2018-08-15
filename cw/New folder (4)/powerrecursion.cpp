#include <iostream>
using namespace std;
int power(int n,int i){
	if(i==0){
		return 1;
	}
	
	int x=n*power(n,i-1);
	
	return x;
}
int main(){
	int n,i;
	cin>>n>>i;
	int x=power(n,i);
	cout<<x;
}