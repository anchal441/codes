#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	if(a>b && b>c){
		cout<<"largest is a"<<a<<endl;
	}
	else if(b>a && b>c){
		cout<<"largest is b"<<b<<endl;
	}
	else{
		cout<<"print largest is c"<<c<<endl;
	}






}