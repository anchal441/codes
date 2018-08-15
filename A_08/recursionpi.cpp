#include <bits/stdc++.h>
#include <cstring>
using namespace std;
void replacepi(string s,int index,string v,int be){
	if(index=s.length()-1){
		return;
	}
	if(s[index]=='3'){
		if(s[index+1]=='.'){
			if(s[index+2]=='1'){
				if(s[index+3]=='4'){
					v[be]='p';
					s[be+1]='i';
					return replacepi(s,index+4,v,be);
				}
				else{
					v[be+3]=s[index+30];
					return replacepi(s,index+4,v,be+4);
				}
			}
			else{
				v[be+2]=s[index+2];
				return replacepi(s,index+3,v,be+3);
			}
		}
		else{
			v[be+1]=s[index+1];
			return replacepi(s,index+2,v,be+2);
		}
	}
	else{
		v[be]=s[index];
		return replacepi(s,index+1,v,be+1);
	}
}
int main(){
	int n;
	cin>>n;
	string s[n+1];
	string v;

	for(int i=0;i<n+1;i++){
		getline(cin,s[i]);

	}
//for(int i=0;i<n+1;i++){
	//	cout<<s[i]<<endl;
	//}
	
	for(int i=0;i<n+1;i++){
		replacepi(s,0,v,0);
		cout<<v;
	}
}