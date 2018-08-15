#include <bits/stdc++.h>
using namespace std;
int overlappingall(string s,int index,int count){
	if(index==s.length()-1){
		return count;
	}
	if(s[index]=='a'){
		if(s[index+1]=='a'){
			if(s[index+2]=='a'){
				count=count+1;
			}

		}
	}
	return overlappingall(s,index+1,count);
}
int overlappingnotall(string s,int be,int count){
	//cout<<"be at entering "<<be<<endl<<"count at entering "<<count;
	if(be>=s.length()-1){
		return count;
	}
	if(s[be]=='a'){
		if(s[be+1]=='a'){
			if(s[be+2]=='a'){
				count=count+1;
				//cout<<"count after aaa not "<<count<<endl;
				//cout<<"index after aaa not "<<be<<endl;

				 return overlappingnotall(s,be+3,count);
			}
			
			else{
	 return overlappingnotall(s,be+3,count);
				}

		}
		else{
			return overlappingnotall(s,be+2,count);
		}
	}
	
	else{
		return overlappingnotall(s,be+1,count);
	}

}
int main(){
	string s;
	cin>>s;
	int x=overlappingall(s,0,0);
	cout<<x<<endl;
	int y=overlappingnotall(s,0,0);
	cout<<y;
}