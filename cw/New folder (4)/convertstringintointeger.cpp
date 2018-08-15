#include <iostream>
using namespace std;
void mymerge(int arr[],int arr[]){

}
void mergesort(int arr[],int a,int b,int c){

 
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int be=0;
	mergesort(arr,0,n/2);
	mergesort (arr,(n/2)+1,n);
	mymerge(arr,0,n);
}