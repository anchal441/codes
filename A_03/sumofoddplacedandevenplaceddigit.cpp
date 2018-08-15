#include <iostream>
using namespace std;
int main()
{	long int x,count,r;
	cin>>x;
	int sodd,seve;
	count=2;
	sodd=0;
	seve=0;

	while(x!=0){
	
	
	count++;
	r=x%10;
	x=x/10;
	
	
	if(count%2==1){
		 sodd=sodd+r;


	}
	else{
		 seve=seve+r;
	}
	//cout<<sodd<<endl;
	//cout<<seve<<endl;




}
cout<<sodd<<endl;
	cout<<seve<<endl;



}