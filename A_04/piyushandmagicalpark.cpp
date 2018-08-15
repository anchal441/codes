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
	//cout<<arr[n][m]<<endl;


	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]=='#'){
				
				s=s-1;
				break;
				//cout<<s<<"s in #"<<endl;
			}
			else if(arr[i][j]=='.'){
				if(arr[i][0]=='.'){
					s=s-2;
				}
				else{
					s=s-3;
				}
				//cout<<s<<"s in ."<<endl;
			}
			else if(arr[i][j]=='*'){ 
				
				if(arr[i][0]=='*'){
					s=s+5;
				}
				else{
					s=s+4;
				}
				//cout<<s<<"s in *"<<endl;
			}
			
		}
	}
	if(k<=s){
		
		cout<<"Yes"<<endl;
		cout<<s;
		
	}
	else{
		cout<<"No";
		
	}

}