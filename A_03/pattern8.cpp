/*#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i,j,k;
	for(i=1;i<=(n/2)+1;i++){
		
			cout<<" ";
		for(j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(j=1;j<=2*i-1;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	for(i=(n/2)+2;i<=n;i++){
		cout<<"   ";
		for(k=1;k<=i-((n/2)+1);k++){
			cout<<" ";
			
		}
		for(int l=1;l<=2*(n-i+1)-1;l++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}*/
#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n==0){
    	cout<<"0";

    }
    else{
    for(int i=0;i<n;i++)
    {
        for(int j = n-i-1;j>0;j--)
            cout<<" \t";
        for(int j = i+1;j<=2*i+1;j++)
            cout<<j<<"\t";
        for(int j=2*i; j>=i+1;j--)
            cout<<j<<"\t";
        cout<<"\n";
    }
    for(int i=n-2;i>=0;i--)
    {
        for(int j = 1;j<=n-i-1;j++)
            cout<<" \t";
        for(int j = i+1;j<= 2*i+1;j++)
            cout<<j<<"\t";
        for(int j=i+1; j<=2*i;j++)
            cout<<j<<"\t";
        cout<<"\n";
    }
    return 0;
}

}