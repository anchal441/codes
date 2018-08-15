#include <iostream>
using namespace std;
int lastindex(int arr[],int i,int n,int y,int z,int index){
	
	if(i==n){
		if(z==0){
		return -1;
		}
		else{
			return index;
		}
	}
	if(arr[i]==y){
		z=1;
		index=i;
		//return i;
	}
	lastindex(arr,i+1,n,y,z,index);

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
	int b=lastindex(arr,0,n,y,0,0);
	cout<<b;
	
}