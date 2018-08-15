#include <iostream>
using namespace std;
int main(){
	int sb,db,sn;
	cin>>sb>>db>>sn;
	int a=sn;
	int s=0;
	int b=1;
	int rem;

	while(a!=0){
		rem=a%10;
		s=s+rem*b;
		b=b*sb;
		a=a/10;
	}
	 b=1;int sum=0;
	while(s!=0){
		rem=s%db;

		sum=sum+rem*b;
		
		b=b*10;
		s=s/db;
	}
	cout<<sum<<endl;
}