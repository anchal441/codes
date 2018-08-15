#include <iostream>
using namespace std;
int main(){

char c[1001];
char r[1001];
long long int cnt=0;
cin>>c;


for(int i=0;c[i]!='\0';i++){
	
	r[i]=c[i];
	cnt++;
}
	r[cnt]='\0';
	long long int i=0;
	bool flag=1;
while(c[i]!='\0'){
	if (c[i]!=r[cnt-i-1]){
		flag=0;
	break;		
	}
	else{
		i++;
		}
}	
if(flag==1){
		cout<<"true";
	}	
	else{
		cout<<"false";
	}

return 0;
}