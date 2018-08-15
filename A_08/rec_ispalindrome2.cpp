#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(string s,int index,int en){
	if(index>en){
		return true;
	}
	if(s[index]==s[en]){
		return ispalindrome(s,index+1,en-1);
	}
	else{
		return false;
	}
}
int main(){
	string s;
	cin>>s;
	if(ispalindrome(s,0,s.length()-1)==true){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
}