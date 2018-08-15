#include <iostream>
using namespace std;
int main(){
/*	string s;
	int n=1000;
	char arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
}
*/


int n;
cin>>n;
char c[n];
char r[n];
int cnt=0;

for(int i=0;i<n;i++){
	cin>>c[i];
	
}
for(int i=0;i<n;i++){
	
	r[i]=c[i];
}
for(int i=0;i<n;i++){
	if (c[i]!=r[n-i]){
		flag==0;
		
	}
	else{
		cout<<"false";
	}
	

}
cout<<"true";

}