#include <iostream>
using namespace std;
int main(){
	int arr[100];
	int n;
	cin>>n;
	//input array
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	//bubble sort
	for(int i=0;i<n;++i){
		for(int j=0;j<n-i;++j){
			if(j+1<n&&arr[i]>arr[j+1]){
				//swap
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}

		}
	}
	//output the array
	for(int i=0;i<n;++i){
		cout<<arr[i]<<" ";
	}
}