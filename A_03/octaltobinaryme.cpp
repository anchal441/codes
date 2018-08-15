#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a=n;
	int s=0;
	int b=1;
	int rem;

	while(a!=0){
		rem=a%10;
		s=s+rem*b;
		b=b*8;
		a=a/10;
	}
	 b=1;int sum=0;
	while(s!=0){
		rem=s%2;

		sum=sum+rem*b;
		
		b=b*10;
		s=s/2;
	}
	cout<<sum<<endl;
}