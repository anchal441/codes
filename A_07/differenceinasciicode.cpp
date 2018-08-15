#include <iostream>
#include <cstring>
using namespace std;
int main(){
	
	char input[1001];
	char output[2002];
	cin>>input;
	int be=0;
	int index = 0;
	while(input[be]!='\0'){
		output[index]=input[be];
		index++;
		if(input[be+1]!='\0'){
			//input[be+1]-input[be] is a integer value e.g.- 1
			//to conveert this to char to store it in char output[] we add '0' to 1 and it becomes '1'
			//int + '0' = char
			//1 + '0' = '1'
			int a=input[be+1]-input[be];
			if(a<0){
				a*=-1;
				output[index]='-';
				index++;
			}
			if(a<10){
			output[index]=a+'0';
			index++;}
			else{
				char arr[2];
				int i=0;
				while(a!=0){
					arr[i]=a%10+'0';
					i++;
					a=a/10;
				}
				i--;
			    while(i>=0){
			    	output[index]=arr[i];
			    	index++;
			    	i--;
			    }
			}
		}
		be++;
	}
	output[index]='\0';
	cout<<output;




}