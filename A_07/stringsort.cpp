#include <bits/stdc++.h>
using namespace std;
std::vector<string> v;
bool compare(string a,string b){
	
	int i=0;
		while(a[i]!='\0'&&b[i]!='\0'&&a[i]==b[i]){
         i++;
      }
      if(a[i]=='\0'||b[i]=='\0'){
         return(a.length()>b.length());
      }
   if(a!=b){
      return(a<b);
   }
}
int main(){
   int n;
   string str;
   cin>>n;
   v.resize(n);
   for(int i=0;i<n;i++){
   	cin>>str;
   	v[i]=str; 
   }
   sort(v.begin(),v.end(),compare);
   for(int i=0;i<n;i++){
   	cout<<v[i]<<endl; 
   }
}