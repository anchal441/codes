#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n==1){cout<<"0"<<endl;}
	else{
		cout<<"0"<<"\n";
	unsigned long long int d=1;
		cout<<"1 ";
	 unsigned long long int e=1,c;
		cout<<e<<"\n";


	
		for(int i=1;i<=n-2;i++){
			
			for(int j=1;j<=i+2;j++){
		c=d+e;
		
		cout<<(c);
		
			d=e;
			e=c;
		cout<<" ";
		}
		cout<<"\n";
		}
	}}
