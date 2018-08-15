#include <bits/stdc++.h>
using namespace std;
int sumofdigit(string s,int index,int sum){
	
	if(index>s.length()-1){
		return sum;
	}
	 sum=sum+(int)(s[index]-48);
	return sumofdigit(s,index+1,sum);

}
int main(){
	string s;
	cin>>s;
	int y=sumofdigit(s,0,0);
	cout<<y;
}