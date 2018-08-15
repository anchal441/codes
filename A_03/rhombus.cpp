#include <iostream>
using namespace std;
int main()
{
	long int n;
	cin>>n;
	if(n==1){
		cout<<"*";
	}
	else{
	for(int i=1;i<n;i++){
		cout<<" ";
	}
	for (int j=1; j<=n; ++j)
	{
		cout<<"*";
	}cout<<endl;
	for(int i=1;i<=n-2;i++)
	{ for(int k=0;k<n-i-1;k++)
		cout<<" ";
	
	cout<<"*";
	for(int j=1;j<=n-2;j++){
		cout<<" ";
	}
	cout<<"*";
	
	cout<<endl;

}
for(int i=0;i<=n-1;i++)
cout<<"*";

}
}
