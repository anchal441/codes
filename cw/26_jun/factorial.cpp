#include <iostream>
using namespace std;
int factorial(int n){
	if(n==0){
		return 1;
	}
	int factorial1=factorial(n-1)*n;
	return factorial1 ;


}
int main(){
	int n;
	cin>>n;

	factorial(n);
	cout<<factorial(n);
}