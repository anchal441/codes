#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;

	cin>>n;
	int p=n;
	for(int i=0;i<n;i++){
		int count =0;
		for(int j=0;j<=i;j++){
			count++;
			cout<<count<<"\t";
		}
		
		for(int k=1;k<=2*p-3;k++){
			cout<<"\t";
			

		}
		p--;
		for(int s=0;s<=i;s++){
			if(i==n-1){

				for(int m=0;m<n-1;m++){
					count--;
					cout<<count<<"\t";

				}
				break;

			}
			else{
				cout<<count<<"\t";
				count--;
			}
		}
		cout<<endl;
	}
}