#include <iostream>
using namespace std;
void reverse(int index,int arr[]){
	if(index<0){
		return;
	}
	cout<<arr[index]<<" ";
	reverse(index-1,arr);
	
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	reverse(n-1,arr);
}