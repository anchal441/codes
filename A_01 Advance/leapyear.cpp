#include <iostream>
using namespace std;
int main()
{
	int n,y,x;
	cin>>n;
	x=n%4;
	
	if(x!=0){
		cout<<"not leap";

	}
	else{
		if(x=n%400){
			if(x=0) {
				cout<<"not a leap";

			}
			else{
				cout<<"leap";
			}
		}
	}

}