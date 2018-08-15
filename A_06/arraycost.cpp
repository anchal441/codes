#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	for(int b=0;b<t;b++){
		int count =0;
		long long int n;
		cin>>n;
		long long int arr[n];
		for(int k=0;k<n;k++){
			cin>>arr[k];
		}
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(arr[j]<arr[i]&&j>i){
					++count;
				}
			}
		}
		cout<<count<<endl;

	}
cout<<endl;
}