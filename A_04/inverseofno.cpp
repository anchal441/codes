#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	
	int a[n+1];
	 int i=1;int b;

	while(n!=0){
		b=n%10;
		a[b]=i;
		i++;
		n=n/10;
	}
	cout<<a[i];
	int s=0,x=1;i=0;
	for(i=1;i<=n;i++){
		s=s+a[i]*x;
		x=x*10;
	}
	cout<<s<<endl;

	}

	/*int arr[50];
	int largest=-10000;
	for(int i=0;i<10;i++){
		cin>>arr[i];
		largest==arr[i];
		if(arr[i]>largest){
			largest=arr[i];
			//cout<<"largest now is"<<largest<<endl;
		}
		else{
			
			//cout<<"largest now is"<<largest<<endl;
		}
	}*/

