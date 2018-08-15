#include <iostream>
using namespace std;
int main()
{
	int n1;
	cin>>n1;
	int n2;
	cin>>n2;
	int n=1;
	int count =0;
	while(count!=n1){
		
		if(((3*n)+2)%n2!=0){
			cout<<3*n+2<<endl;
			count++;

		}
		n++;
		
		

	}

}