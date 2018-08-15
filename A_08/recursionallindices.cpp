#include <iostream>
using namespace std;
void firstindex(int arr[],int i,int n,int y){
	if(arr[i]==arr[n]){
		return;
	}
	if(y==arr[i]){
		cout<<i<<" ";
		
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
	firstindex(arr,0,n,y);
	//cout<<x;
}