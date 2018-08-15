#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=n-i;j++){
			cout<<" ";
		}
		int k;
		for(k=1;k<=i;k++){
			cout<<"*";
		}
		cout<<endl;
	}
}