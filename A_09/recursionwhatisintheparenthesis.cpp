#include <bits/stdc++.h>
using namespace std;
void whatinparenthesis(string s,int index,bool k){
	if(index==s.length()){
		return;
	}
	if(s[index]=='('){
		index=index+1;
		k=true;		
	}

	if(s[index]==')'){
		k=false;
		}
	if(k==true){
			cout<<s[index];
		}
	return whatinparenthesis(s,index+1,k);
}
int main(){
	string s;
	cin>>s;
	whatinparenthesis(s,0,false);
}

