#include <iostream>
using namespace std;
int main(){
	char c;
	c=cin.get();//same as cin.get(c);
	int words=0,line=0,characters=0;
	bool insideword=false;
	while(c!='$'){
		if(c==' '||c=='\n'||c=='\t'){
			if(insideword==true){
				++words;
			}
			insideword=false;
			if(c=='\n'){
				++line;
			}
		}
			else{
				insideword=true;
			}
			++characters;
			cin.get(c);
		
		
	}
cout<<words<<"words"<<endl;
cout<<characters<<"characters"<<endl;
cout<<line<<"line"<<endl;



}

