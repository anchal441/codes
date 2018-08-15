#include <iostream>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	long long int target;
	cin>>target;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==target){
				if(arr[i]<arr[j]){
				cout<<arr[i]<<" "<<"and"<<" "<<arr[j]<<endl;}
				else{
					cout<<arr[j]<<" "<<"and"<<" "<<arr[i]<<endl;
				}
			}
		}



	}
}