#include <iostream>
using namespace std;
bool containinarray(int arr[],int i,int n,int y){
	//int z=0;
	if(i==n){
		
		return false;
		

	}
	//cout<<"z here is "<<z<<endl;
	//cout<<arr[i];
	if(arr[i]==y){
	
		return true;
	}
	//cout<<"arr[i] here is "<<arr[i]<<endl;
	containinarray(arr,i+1,n,y);

}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int y;
	cin>>y;
	if(containinarray(arr,0,n,y)==true){
		cout<<"true";
	}
	if(containinarray(arr,0,n,y)==false){
		cout<<"false";
	}

}