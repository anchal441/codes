#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int left_max[n];
	left_max[0]=0;
	int right_max[n];
	right_max[n-1]=0;
	int max=0;
	for(int i=1;i<n;i++){
	 	if(arr[i-1]>max){
	 		max=arr[i-1];
	 	}
	 	left_max[i]=max;
	}
	max=0;
	for(int i=n-2;i>=0;i--){
	 	if(arr[i+1]>max){
	 		max=arr[i+1];
	 	}
	 	right_max[i]=max;
	}
	int count=0;
	for(int i=0;i<n;i++){
		int x=min(right_max[i],left_max[i])-arr[i];
		if(x>0){
			count+=x;
		}
	}
	cout<<count<<endl;

}