#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x,n,i,power;
	cin>>x>>n;
	double logno;
	i=0;
	while(1){
		power=pow(n,i);
	if(x==power){
	break;
	}
	else{
		i++;
	}
}
cout<<i;
}