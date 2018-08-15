#include <iostream>
using namespace std;
int main()
{
	int a,sum,f1,f2,n;
	cin>>n;
	f1=1;
	f2=1;
	sum=1;
	for(int i=2;i<=n;++i){
		a=sum;
		sum=f1+f2;
		f1=a;
		f2=sum;
	}
	
cout<<sum;
}