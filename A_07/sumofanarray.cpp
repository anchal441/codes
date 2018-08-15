#include <iostream>
using namespace std;
void inputarr(int arr,int n){
	for(int i=0;i<n;i++){
		arr[i];
	}
}

int sumarr(int arr[],int n){

	//this function computes the sumof an n elements of an integer array
	if(n<=0){
		return 0;
	}
	int smallarr[10];
	//copy n-1 elements into small array
	for(int i=0;i<n;i++){
		smallarr[i]=arr[i];
	}	
	int smallsum=sumarr(smallarr,n-1);
	int cursum=smallsum+arr[n-1];
	return cursum;

}

int main(){
	int n;
	cin>>n;
	int arr[100];
	inputarr(arr[100],n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sum=sum(arr,n);
	cout<<sum<<" ";

}