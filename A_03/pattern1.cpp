#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int c=1;
	for(int i=1;i<=n;i++){
	
		for(int j=1;j<=i;j++){
			
			int sum=0;
			sum=sum+c;
			c++;
			cout<<sum<<"\t";
			

		}
	cout<<endl;
	}

}