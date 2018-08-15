#include <iostream>
using namespace std;
void bubblesort(int arr[],int n){
	int i=0;
	while(n!=0){
		if(arr[i]>arr[i]){
			swap(arr[i+1],arr[i]);
		}

}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	bubblesort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}