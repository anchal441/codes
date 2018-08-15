#include <iostream>
using namespace std;
bool recursionisbalanced(char input[],int be,char output[],int index){
	if(input[be]=='\0'){
		if(index==0){
			return(true);
		}
		else{
			return(false);
		}
	}
	else{
		if(input[be]=='['||input[be]=='('||input[be]=='{'){
			output[index]=input[be];
			index++;
		}
		else if(input[be]=='}'||input[be]==')'||input[be]==']'){
			if(output[index-1]=='('&&input[be]==')'||output[index-1]=='['&&input[be]==']'||output[index-1]=='{'&&input[be]=='}'){
				index--;
			}
			else{
				return(false);
			}
		}
		return(recursionisbalanced(input,be+1,output,index));
	}
}
int main(){
	char input[1001];
	char output[1001];
	cin>>input;
 	if(recursionisbalanced(input,0,output,0)==true){
 		cout<<"true";
 	}
 	else if(recursionisbalanced(input,0,output,0)==false){
 		cout<<"false";
 	}
}
