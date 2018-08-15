#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int ans=0;
	int i=0;
	while(n>0){
		long long int rem;
		rem=n%8;
		ans=ans+rem*ceil(pow(10,i));
		i++;
		n=n/8;
		


	}
	cout<<ans;
}