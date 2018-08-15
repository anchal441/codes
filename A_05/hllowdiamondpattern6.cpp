#include <iostream>
using namespace std;
int main(){
	int n=5;
	//cin>>n;
	
	int i,j,count=n/2 ;
	for(int i=0;i<=n/2;++i){
		for(j=1;j<=count+1;++j){
			cout<<"*"<<"\t";}						
		//if(i==0){
		//		cout<<"*"<<"\t";
		//		}
		for(j=1;j<=2*i+1;++j){
			cout<<"\t";
		}
		for(j=1;j<=count+1;++j){
			cout<<"*"<<"\t";
		}
		
			count--;
		cout<<endl;
		
		
	}
	count=2;
	for(int i=n/2-1;i>=0;--i){
		for(j=1;j<=count;++j){
			cout<<"*"<<"\t";			
		}		
		for(j=1;j<=2*i+1;++j){
			cout<<"\t";
		}
		//if(i==0){
		//	for(j=1;j<=count-1;++j){
		//	cout<<"*"<<"\t";
		//}
	//}
		for(j=1;j<=count;++j){
			cout<<"*"<<"\t";
		}
	count++;
		cout<<"\n";
		
		
	}
}