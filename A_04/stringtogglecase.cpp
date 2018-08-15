#include <iostream>
using namespace std;
int main(){
	char c[1000];
	int a;
	cin>>c;
	int i=0;
	for(i=0;c[i]!='\0';i++){
		 a=(int) c[i];
		if(a>=65&&a<=90){
			a=a+32;
			 c[i]=(char) a;
		}
		else{
			a=a-32;
			c[i]=(char) a;
		}
	}
	cout<<c;
}