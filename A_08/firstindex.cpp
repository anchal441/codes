#include <iostream>
using namespace std;
int firstindex(int arr[],int i,int n,int y){
	if(arr[i]=='\0'){
		return -1;
	}
	if(arr[i]==y){
		return i;
	}
	firstindex(arr,i+1,n,y);

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
	int x=firstindex(arr,0,n,y);
	cout<<x;
}