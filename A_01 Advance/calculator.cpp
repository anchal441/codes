#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a;
	cin>>b;
	char ch;
	cin>>ch;
	if(ch=='+'){
		c=a+b;
		cout<<c;
	}
	else if(ch=='-'){
		c=a-b;
		cout<<c;
	}
	else if(ch=='*'){
		c=a*b;
		cout<<c;
	}	
	else if(ch=='/'){
		c=a/b;
		cout<<c;
	}
	else if(ch=='%'){
		c=a%b;
		cout<<c;
	}
	else{
		cout<<"invalid";
	}
}