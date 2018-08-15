#include <iostream>
using namespace std;
int main(){
	int n,s=0,b;
	cin>>n;
	int x=n;

	while(n!=0){
	b=n%10;
	n=n/10;
	s=s+(b*b*b);

}
if(s==x){
	cout<<"true";
}
else{
	cout<<"false";
}
}