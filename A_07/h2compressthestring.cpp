#include <iostream>
using namespace std;
void compress(char str[],char output[],int i,int b){
	if(str[i]=='\0'){
		output[b]='\0';
		return;
	}
	else{
		if(str[i+1]!='\0'&&str[i]==str[i+1]){
			char a=str[i];
			output[b]=a;
			
			int count=2;
			while(str[i+count]!='\0'&&a==str[i+count]){
				count++;
			}
			if(count<10){
  			output[b+1]=count+'0';
			
			compress(str,output,i+count,b+2);}
			else{int j=0,t=count;
				char check[4];
				while(count!=0){
					check[j++]=(count%10)+'0';
					count=count/10;
				}
				j--;
				b++;
				while(j>=0){
                       output[b]=check[j];
                       b++;  j--;
				}
				compress(str,output,i+t,b);
			}			
		}
		else{
			output[b]=str[i];
			compress(str,output,i+1,b+1);

		}
	}
}
int main(){
     int n;
     cin>>n;
     while(n--){
	char str[103],output[207];
		cin>>str;
		compress(str,output,0,0);
		cout<<output<<endl;}
	
}

