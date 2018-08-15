#include <iostream>
using namespace std;
bool arraysorted(long long int arr[],int be,int n){
	if(be==n-1){
		//cout<<arr[be]<<"array at element n"<<endl;
		return true;

	}

	if (arr[be]>arr[be+1]){
		return false;
		}
	arraysorted(arr,be+1,n);
}
int main(){
	int n;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(arraysorted(arr,0,n)==true){
			cout<<"true";
		}
	else{
		cout<<"false";
	}	
}