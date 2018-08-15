#include <iostream>
using namespace std;
int main(){
	char a[1001];
	cin>>a;
	//char output[1001];
	
		for(int i=0;i<'\0';i++){
		if(i%2==1){
			a[i]=(int)a[i]+1
			;
		}
		else{
			a[i]=(int)a[i]-1;
		}
	}
	for(int i=0;i<'\0';i++){
	cout<<a[i];
}
}
