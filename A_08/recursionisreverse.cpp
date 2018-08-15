#include <bits/stdc++.h>
using namespace std;
bool isreverse(string s1,int be,string s2,int n){
	if(n<0){
		return true;
	}
	if(s1[be]!=s2[n]){
		return false;
	}
	if(s1[be]==s2[n]){
		isreverse(s1,be+1,s2,n-1);
	}
}
int main(){
	string s1;
	cin>>s1;
	string s2;
	cin>>s2;
	int n=s2.size();
	if(isreverse(s1,0,s2,n-1)==true){
		cout<<"true";
	}
	else{
		cout<<"false";
	}

}