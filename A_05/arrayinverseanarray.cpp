#include <iostream>
using namespace std;
int main(){
	int n=0;
	cin>>n;
	int arr[n];
	int cpy[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//for(int i=0;i<n;i++){
	//	cout<<arr[i];
	//}
	
	int x;
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			if(arr[i]==j){
				
				x=i;
			}
		}
		//cpy[j]=x;
		cout<<x<<"\n";
		
	}
	/*for(int j=0;j<n;j++){
		cout<<cpy[j];
	}*/
	
}