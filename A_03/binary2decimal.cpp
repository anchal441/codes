#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int x=0,i=0;
	while(n!=0){
		int rem=n%10;
		n=n/10;
		x=x+(rem*ceil(pow(2,i)));
		i++;
	}
	cout<<x;
}

