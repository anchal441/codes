#include <iostream>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i+1]<arr[i]){
			cout<<i;
			break;
		}
		else if(i==n-1&&arr[i-1]<arr[i]){
			cout<<n-1;
		}

	}



}