#include <iostream>
using namespace std;
void descending(int n){
	if(n==0){
		cout<<"0";
		return;
	}
	cout<<n;
	descending(n-1);
	

}
int main(){
	int n;
	cin>>n;

	descending(n);
}