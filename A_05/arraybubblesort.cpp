#include <iostream>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//bubble sort
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			if(arr[i]>arr[i+1]){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}


}