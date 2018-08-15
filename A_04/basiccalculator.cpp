#include <iostream>
using namespace std;
int main(){
	
	while(1){
	char ch;
	cin>>ch;
	if(ch=='X'||ch=='x'){
		break;
	}
	else{
	long long int output=0,n1=0,n2=0;
	if(ch!='+'&&ch!='-'&&ch!='*'&&ch!='/'&&ch!='%'){
		cout<<"Invalid operation. Try again."<<"\n";
		continue;
	}
	cin>>n1;
	cin>>n2;
	if(ch=='+'){
		output=n1+n2;
		cout<<output<<"\n";
	}
	else if(ch=='-'){
		output=n1-n2;
		cout<<output<<"\n";
	}	
	else if(ch=='*'){
		output=n1*n2;
		cout<<output<<"\n";
	}
	else if(ch=='/'){
		if(n2==0){
			break;
		}
		else{
			output=n1/n2;
			cout<<output<<"\n";
		}
	}
	else if(ch=='%'){
		if(n2==0){
			break;
		}
		else{
			output=n1%n2;
			cout<<output<<"\n";
		}
	}
	

}

}
}