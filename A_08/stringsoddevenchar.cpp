#include <bits/stdc++.h>
using namespace std;
void oddevechar(string s,int index){
	if(index>=s.length()){
		return;
	}
	if(index%2==1){
		
		cout<<(char)--s[index];
	}
	if(index%2==0){
		cout<<(char)++s[index];
	}
	return oddevechar(s,index+1);
}
int main(){
	string s;
	cin>>s;
	oddevechar(s,0);

}