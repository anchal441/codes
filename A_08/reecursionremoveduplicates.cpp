#include <bits/stdc++.h>
using namespace std;
char f[100];
void removeduplicate(int index,string s,int be){
	if(s[index]=='\0'){
		return ;
	}
	//f[be]=s[index];
   // cout<<be<<endl;
	int x=0;
	for(int i=0;i<=be;i++){
		//cout<<f[be]<<"< is f be"<<endl;
		//cout<<s[index]<<"< is s index"<<endl;
		if(f[i]==s[index]){
			x=1;
			//cout<<"in f i ==s"<<be<<endl;

		}
	
	}
	if(x==0){
	f[be]=s[index];
	be++;
	//cout<<"for f be =s index"<<be<<endl;
}
	removeduplicate(index+1,s,be);

}
int main(){
	string s;
	cin>>s;
	//char f[100];
	removeduplicate(0,s,0);
	cout<<f;

}