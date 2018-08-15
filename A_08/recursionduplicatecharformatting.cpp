#include <bits/stdc++.h>
using namespace std;
char f[100];
void duplicatecharformatting(int index,string s,int be){
	if(s[index]=='\0'){
		return ;
	}

	int x=0;
	for(int i=0;i<=be;i++){
		
		if(f[i]==s[index]){
			x=1;
			f[be]='*';
			be++;

		}
	
	}
	if(x==0){
	f[be]=s[index];
	//be++;

}
f[be]=s[index];
	be++;
	duplicatecharformatting(index+1,s,be);

}
int main(){
	string s;
	cin>>s;

	duplicatecharformatting(0,s,0);
	cout<<f;

}