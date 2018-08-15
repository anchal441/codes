#include <iostream>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	cout<<"1"<<endl;
	//cout<<"1 1"<<endl;
	int i;
	for(i=0; i<n-1;i++){
	//if(i%2==1){
		cout<<"1";
		if(i%2==1){
			for(int j=0;j<=i;j++)
				cout<<"1";
			cout<<endl;
		}
		else{
			for(int j=0;j<i;j++)
				cout<<"0";
			cout<<"1\n";

		}
		
}}	



	
