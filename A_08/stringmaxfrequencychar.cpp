#include <bits/stdc++.h>
using namespace std;
void maxfrequencychar(string s,int index,int arr[]){
	//cout<<"index in starting "<<index;
	if(index>s.length()-1){
		//cout<<"index at starting "<<index<<endl;
		return;
	}
	//cout<<"in array"<<(int)s[index];
	arr[(int)s[index]]=arr[(int)s[index]]+1;
	return maxfrequencychar(s,index+1,arr);
}
int main(){
	string s;
	cin>>s;
	int arr[130];
	for(int i=0;i<130;i++){
		arr[i]=0;
	}
	int m=0,x;
	maxfrequencychar(s,0,arr);
	for(int i=65;i<130;i++){
		if(arr[i]>m){
		m=arr[i];
		x=i;}

	}
	char c=(char)x;
	cout<<c;


	

}