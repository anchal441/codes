#include <iostream>
using namespace std;
int main(){
	int a[100];
	int n;
	cin>>n;
	int smallest;
		//input array
	for(int i=0;i<n;++i){
		cin>>a[i];}

		//section sort
		//for every position i, I have to find corresponding smallest element

		for(int i=0;i<n;++i){
			//finding smallest
			int smallest=a[i];
			int pos=i;
			for(int j=i;j<n;j++){
	
			if (a[i]<smallest){
				smallest=a[j];
				pos=j;
			}
			

		}
		int tmp=a[i];
		a[i]=smallest;
		a[pos]=tmp;
}
//output the array
	for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}
}