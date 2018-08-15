
#include <bits/stdc++.h>
using namespace std;

int counthi(string s,int index,int count){
	if(index>=s.length()-1){
	return count;
	}
	if(s[index]=='h'){
		if(s[index+1]=='i'){
			count=count+1;			
		}
	}
	return counthi(s,index+1,count);
}

void removehi(string s,int index){
if(index>=s.length()-1){
	cout<<endl<<s;
	return;
	}
	if(s[index]=='h'){
		if(s[index+1]=='i'){
			s[index]=s[index+2];
			s[index+1]=s[index+3];	
			return removehi(s,index+2);		
		}
	}

	return removehi(s,index+1);
}
void replacehi(string s,int index){
	if(index>=s.length()-1){
	cout<<endl<<s;
	return;
	}
	if(s[index]=='h'){
		if(s[index+1]=='i'){
			s[index]="by";
			s[index+1]="e";	
			return removehi(s,index+2);		
		}
	}

	return removehi(s,index+1);
}
int main(){

	string s;
	cin>>s;

	int count=counthi(s,0,0);
	cout<<count;
	removehi(s,0);
	replacehi(s,0);

}