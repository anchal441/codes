#include <iostream>
#include <cstring>
using namespace std;
int moveallxatend(string s,int be,string &k){
	if(be==s.length()){
		return 1;
	}
	if(s[be]=='x'){
	}
	else{
		k=k+s[be];

	}
	moveallxatend(s,be+1,k);
	
	
}
int main(){
	string s;
	cin>>s;
	string k="";
	moveallxatend(s,0,k);
	int j=k.length();
	for(int i=j;i<s.length();i++){
		k=k+'x';
	}

	cout<<k;	
	
}