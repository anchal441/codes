#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],b[n],c[n+n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int j=0;j<n;j++){
		cin>>b[j];
	}
	int i=0,j=0,k=0;
	while(i<n&&j<n){
		if(a[i]<b[j]){
			c[k]=a[i];
			i++;
			k++;
		}
		else{
			c[k]=b[j];
			j++;
			k++;
		}
	}
	while(i<n){
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<n){
		c[k]=b[j];
		j++;
		k++;
	}
	int median=(c[n-1]+c[n])/2;
	cout<<median;

}