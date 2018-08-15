#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long int b,n,i,x;
	cin>>n;
	x=0;
	i=0;
	if(n<=0){
		cout<<5;
	}
	else{
	while(n>0){
	    
		b=n%10;
		n=n/10;

		if(b==0){
			b=5;//cout<<x<<" "<<pow(10,i)<<endl;
			x=x+(b*ceil(pow(10,i)));
			//cout<<"x in if"<<x<<endl;
			//cout<<x<<endl;
		}
		else{
			//cout<<x<<" "<<pow(10,i)<<endl;
			x=x+(b*ceil(pow(10,i)));
			//cout<<"x in else"<<x<<endl;
		}
		i++;
//cout<<"i increment"<<i<<endl;
	}

cout<<x;}
}