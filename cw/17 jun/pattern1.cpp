#include <iostream>
using namespace std;
int main(){
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++){
		for(k=1;k<=i;k++){
			cout<<"*";
		}
		cout<<" ";
		for(k=3;k>=n-i+1;k--){
			cout<<"*";
		}
		cout<<" ";
		}
		for(k=3;k>=n-i+1;k--){
			cout<<"*";
		}
		cout<<" ";
		
		for(k=1;k<=i;k++){
			cout<<"*";
			cout<<endl;
		}
		cout<<endl;
	}



