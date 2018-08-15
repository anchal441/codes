#include<iostream>
using namespace std;
int shift(char str[],int be){
	int a=be;
	while(str[a+1]!='\0'){
		str[a]=str[a+1];
		a++;
	}
	str[a]='\0';
}
void rec_x(char str[],int be)
{
	if(str[be+1]=='\0'){
		return;
    }
    if(str[be]==str[be+1]){
    	shift(str,be+1);
    	rec_x(str,be);
    }
    else
    	rec_x(str,be+1);
}

int main(){
	char str[100];
	cin>>str;
	rec_x(str,0);
	cout<<str<<endl;
	return(0);
}