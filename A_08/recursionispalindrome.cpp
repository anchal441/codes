#include <iostream>
using namespace std;
bool ispalindrome(int arr[],int be,int end,int n){
	if(be==n-1&&end==0){
		return true;
	}

	if(arr[be]!=arr[end]){
		return false;
	}
	if(arr[be]==arr[end]){
		ispalindrome(arr,be+1,end-1,n);
	}

}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(ispalindrome(arr,0,n-1,n)==true){
		cout<<"true";
	}
	else{
		cout<<"false";
	}

}