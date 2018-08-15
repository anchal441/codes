#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a=1;
	for(int i=1;i<=n;i++){

		cout<<a;

		for(int j=2;j<=i;j++){
			int b=a+1;
			cout<<b;
		}
		
		for(int g=1;g<=(2*(n-i)-i);g++){
			cout<<" ";
		}
		for(int c=1;c<n;c++){

			if(c==1){
				cout<<c<<endl;
			}
			else if(c==n){
				c=c-1;

					for(int j=2;j<=c;j++){
					
			     	cout<<c;
				    	
				    	for(int k=2;k<=c;k++){
				    		c--;
				    		cout<<c;
				    	}
					}

			}
			else{
				for(int j=2;j<=c;j++){
					
			     	cout<<c;
				    	
				    	for(int k=2;k<=c;k++){
				    		c--;
				    		cout<<c;
				    	}
					}
			}



		}
		cout<<endl;
	}
}