#include <iostream>
using namespace std;
int main(){
	long long int sze;
	cin>>sze;
	long long int matchingno;
	long long int a[sze];
	
	for(int i=0;i<sze;i++){
		cin>>a[i];
	}
	cin>>matchingno;

	int id=0;
	for(int i=0;i<sze;i++){
		if(a[i]==matchingno){
			cout<<i;
			id=1;
			break;
		}
	}

	if(id==0){
	cout<<"-1";}

}