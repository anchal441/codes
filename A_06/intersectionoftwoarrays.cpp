#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr1[n];
	int arr2[n];
	for(int i=0;i<n;i++){
		cin>>arr1[n];
	}
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n - i; ++j){
			if(j + 1 < n && arr1[j] > arr1[j + 1]){
				//swap
				int tmp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = tmp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cin>>arr2[n];
	}
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n - i; ++j){
			if(j + 1 < n && arr2[j] > arr2[j + 1]){
				//swap
				int tmp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = tmp;
			}
		}
	}
	cout<<"[";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr1[i]==arr2[j]){
				cout<<arr1[i]<<", ";
			}
		}
	}
	cout<<"]";
}