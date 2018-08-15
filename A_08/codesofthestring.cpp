#include <iostream>
#include <vector>
using namespace std;
vector<string> v;
void possible_codes(char str[],char output[],int be,int i){
	if(str[be]=='\0')
	{
		output[i]='\0';
		v.push_back(output);
		return;
	}
		int dig=str[be]-'0';
		char alpha=dig+'a'-1;
	    output[i]=alpha;
		possible_codes(str,output,be+1,i+1);
		if(str[be+1]=='\0')return;
		int x=str[be+1]-'0';
	     int num=dig*10+x;
		if(num>26)return;
		char newch=num+'a'-1;
		   output[i]=newch;
			possible_codes(str,output,be+2,i+1);
		
}
int main(){
	char str[100];
	cin>>str;
	char output[100];
	possible_codes(str,output,0,0);
	cout<<"[";
	for(int i=0;i<v.size()-1;i++)
		cout<<v[i]<<", ";
	cout<<v[v.size()-1];
	cout<<"]";

	return(0);

}