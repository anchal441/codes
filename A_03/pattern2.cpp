#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n==1){cout<<1<<endl;}
	else{
		cout<<1<<endl;
	cout<<2<<"\t"<<2<<endl;
	for(int i=1;i<=n-2;i++){
		int b=i+2;
		cout<<b;
		cout<<"\t";
		for(int j=1;j<=i;j++)
		{
			cout<<"0\t";
		}
		cout<<b<<"\t"<<endl;
	}}
}