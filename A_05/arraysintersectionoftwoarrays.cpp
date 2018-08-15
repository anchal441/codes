#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int sec[n];
	int x[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	
	for(int j=0;j<n;j++){
		
		cin>>sec[j];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){

			if(arr[i]==sec[j]){
				
				x[i]=arr[i];
				cout<<x[i];

			}
		
		}
	}

cout<<"["<<"]";
}