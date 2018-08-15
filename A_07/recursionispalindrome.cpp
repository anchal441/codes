#include<iostream>
#include<string>
using namespace std;

bool rec_pal(char str[],int a,int b){
	if(a==b||a+1==b)
		return 1;
    if(str[a]==str[b])
    	return(rec_pal(str,a+1,b-1));
    else
    	return 0;
}
int main(){
	int n;
	cin>>n;
	while(n--){
	char str[100];
	cin>>str;
	int n=string(str).size();
	bool is_pal = rec_pal(str,0,n-1);
	if(is_pal==0)
		cout<<"false"<<endl;
	else
		cout<<"true"<<endl;
	return 0;
}
}