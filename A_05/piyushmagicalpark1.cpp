#include <iostream>
using namespace std;
int main(){
	int n,m,k,s;
	cin>>n>>m>>k>>s;
	char arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]=='.'){
				if(j==0){
					s-=2;
					}
				else{
					s-=3;
			
			}}
			else if(arr[i][j]=='*'){
				if(j==0){
					s+=5;
			}
				else{
					s+=4;
				
			}
			}	
			else if(arr[i][j]=='#'){
				s=s-1;
			
				break ;
				//j=m;
			}
			if(s<=0){
				break;
			}
			

	}
		if(s<=0){
				break;
			}}
	if(s>=k)
		{
			cout<<"Yes"<<endl<<s;
		}
	else
		{cout<<"No";}

}