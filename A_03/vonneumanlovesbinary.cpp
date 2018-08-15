#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int a,s,b,c;
	while(n--)
	{
	
		cin>>a;
		s=0;
		b=1;
		
		while(a!=0){
			c=a%10;
			s=s+c*b;
			b=b*2;
			a=a/10;
		
		}
		cout<<s<<endl;
	
}
}