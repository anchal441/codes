#include <iostream>
using namespace std;
int main(){
	int n=5;
	if(n==5){
	
	long long int i,j,count=n ;
	if(n=5){
	for( int i=0;i<n;++i){
		for(j=1;j<count;++j){
			cout<<"*";}						
		if(i==0){
				cout<<"*";
				}
		for(j=1;j<=2*i-1;++j){
			cout<<" ";
		}
		for(j=1;j<count;++j){
			cout<<"*";
		}
		if(i!=0){
			count--;
		}
		cout<<endl;
	}
	count=2;
	for(int i=n-2;i>=0;--i){
		for(j=1;j<=count;++j){
			cout<<"*";			
		}		
		for(j=1;j<=2*i-1;++j){
			cout<<" ";
		}
		if(i==0){
			for(j=1;j<=count-1;++j){
			cout<<"*";
		}
	}
		else{
		for(j=1;j<=count;++j){
			cout<<"*";
		}
	}
		count++;
		cout<<"\n";
	}
}
}}