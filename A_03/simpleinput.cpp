#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	while(1)
	{
		int a;
		cin>>a;
		sum=sum+a;
		
		if(sum<0){
			break;
		}
		cout<<a<<endl;
	}

}	
