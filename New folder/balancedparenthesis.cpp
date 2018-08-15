#include <bits/stdc++.h>
using namespace std;

template<typename T> 
class Stack{
	T*arr;
	int cs;
	int ms;
public:
	Stack(int s=4){
		cs=0;
		ms=s;
		arr=new T[s];
	}
	void push(const T data){
		if(cs==ms){
			T *oldarr=arr;
			ms<<=1;
			arr =new T[ms];
			for(int i=0;i<cs;i++){
				arr[i]=oldarr[i];
			}
			delete [] oldarr;
		}
		arr[cs]=data;
		cs++;
	}
	void pop(){
		cs--;
	}
	T operator[](int index){
		return(arr[index]);
	}
	int size(){
		return(cs);
	}
	T top() const{
        return arr[cs-1];
     }
	bool Isempty(){
		if(cs==0)
			return(true);
		else
			return(false);
	}
};

void CheckBalance(string s,Stack<char> &v){
	int flag=0;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]=='('){
			
			v.push(s[i]);
		}
		else if(s[i]==')'){

			if(!v.Isempty()&&v.top()=='(')
				{
				v.pop();}
			else {
				flag=1;
				break;
			}
		}
    
	}
	if(flag==0&&v.Isempty()){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}

}
int main(){
	Stack<char> v;
	string s;
	cin>>s;
	CheckBalance(s,v);
}