#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	int s=0;
	int a;
	
	while(n!=0){
		a=n%10;
		s=s+pow(10,(a-1))*i;
		n=n/10;
		i++;
	}
	cout<<s;
}