#include <iostream>
using namespace std;

bool sheckpalindrome(char str[]){
	int len=length(str);
	int i=0;
	int j=len-1;
	bool ispalindrome=true;
	while(i<j){
		if(str[i]!=str[j]){
			ispalindrome=false;
		}
	}++i;
}

int main(){
	int length;
	char str[100];
	cin>str;
	bool ans=checkpalindrome(str);
}