#include <iostream>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	int c;
	cin>>c;
	int count=0;
	int flag=0;
	while(n!=0){
		int b=n%10;
		n=n/10;
		if(c==b){
			flag=1;
			count++;
		}
		else{
			flag=0;
		}

	}
	cout<<count;



	
}