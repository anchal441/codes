#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int n[1000];
	long long int a;
	cin>>a;
	n[0]=0;
	n[1]=1;
	for(int i=2;i<=a;i++){
		
		n[i]=n[i-1]+n[i-2];
	}
	a=n[a];
	cout<<a;

}
