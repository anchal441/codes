#include <iostream>
using namespace std;
int len(char arr[]){
	//int n is not reqiuired
	int i=0;
	while(arr[i]!='\0'){
		++i;
	}
	return i;
}
int main(){
	char arr[102];
	cin>>arr;
	int l=len(arr);
	cout<<l;
}