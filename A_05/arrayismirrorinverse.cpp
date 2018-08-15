#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	cin>>a[i];}
	int b[n],count=0;
	for(int i=0;i<n;i++)
		b[i]=a[i];
	for(int i=0;i<n;i++){
    if(b[a[i]]!=i)
    	{count=1;
    		cout<<"false"<<endl;
    		break;}
    }
    if(count==0)
    	cout<<"true"<<endl;
    return 0;

}