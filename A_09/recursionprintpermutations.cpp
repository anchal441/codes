#include <iostream>
#include <cstring>
using namespace std;
int cnt = 0;

int printPermutation(string s, string res){
	//print permuatation prints all the permutations of a string s after appenda	ing them
	//to res
	if(s.size() == 0){
		
		cout << res << endl;
		return 1;

	}

	int x=0;
		for(int i = 0; i < s.size(); ++i){
		string newRes = res + s[i];
		//count=count+1;
		string rem = s.substr(0, i) + s.substr(i + 1);
		x=x+printPermutation(rem, newRes);
	}
	return x;
}
 /*int factorial(int n){
	if(n==0){
		return 1;
	}
	int factorial1=factorial(n-1)*n;
	return factorial1 ;}
	*/



int main(){
	string s;
	cin >> s;	
	//int x=factorial(s.length());
	//cout<<x<<endl;
	printPermutation(s, "");
}