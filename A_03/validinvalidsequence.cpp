#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int s1;
	cin>>s1;
	n=n-1;
	int flag=0;
	int rogue=0;
	while(n--){
		int a;
		cin>>a;
		if(s1>a){
			s1=a;
			if(flag==1){
				rogue=1;
			}
		}
		else{
			flag=1;
			s1=a;
		}
	}
	
	
if(rogue==0){
		cout<<"true";}
		else
			cout<<"false"<<endl;


}