#include <iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;

	int ans=0;

	while(num>0){
		int unitdigit=num%10;
		//shift my ans so as to accomodate the new unitdigit
		ans=ans*10;	//ans*=10;
		ans+=unitdigit;
		num/=10;



	}
cout<<ans;






}