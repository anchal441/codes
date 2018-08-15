#include <iostream>
using namespace std;
int main(){

int arr[50];
int sze;
cin>>sze;
int search;
cin>>search;

for(int i=0;i<sze;i++){
		cin>>arr[i];
	
	if(arr[i]==search){
		cout<<"match found"<<endl;
	}
	else{
		cout<<"no match found"<<endl;
	}

}

}