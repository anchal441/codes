#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int first[n];
	for(int i=0;i<n;i++){
		cin>>first[i];
	}
	int m;
	cin>>m;
	int sum[m+1];
	int second[m];
	for(int i=0;i<m;i++){
		cin>>second[i];
	}
	int carry=0;
	if(m>n){

		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				sum[m+1-j]=second[m-j-1]+first[n-j-1]+carry;
				carry=0;
				if(sum[m+1-j-1]>9){
					carry=sum[m+1-j-1]-9;
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<sum[i]<<endl;
		}


	}

	else if(m<n){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				sum[n+1-j]=second[n-j-1]+first[m-j-1]+carry;
				carry=0;
				if(sum[n+1-j-1]>9){
					carry=sum[n+1-j-1]-9;
				}
			}
		}
		


	}
	for(int i=0;i<n;i++){
			cout<<sum[i]<<endl;
		}

}