#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	int arr[n],target;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>target;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n - i; ++j){
			if(j + 1 < n && arr[j] > arr[j + 1]){
				//swap
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	for(int i=0;i<n-2;i++){
		//cout<<"here i is"<<i;
		for(int j=i+1;j<n-1;j++){
			//cout<<"here j is"<<j;
			for(int k=j+1;k<n;k++){
			//	cout<<"here k is"<<k;
				int sum=arr[i]+arr[j]+arr[k];
				if(target==sum){
					cout<<arr[i]<<", "<<arr[j]<<" and "<<arr[k]<<endl;
				}
			}
		}
	}
}