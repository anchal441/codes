#include <iostream>
using namespace std;
int main()
{
	long int n,x,b,sodd,seve;
	cin>>n;
	
	while(n--){
		sodd=0;
		seve=0;
		cin>>x;

		while(x!=0){
			b=x%10;
			x=x/10;
			if(b%2==1){
				sodd=sodd+b;
				//cout<<"sum of odd is "<<sodd<<endl;
			}
			else{
				seve=seve+b;
				//cout<<"seve is "<<seve<<endl;
			}
		//cout<<"x is "<<x<<endl;
		//cout<<"b is "<<b<<endl;

		 
	}	
	if(sodd%3==0||seve%4==0){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}}
}	
