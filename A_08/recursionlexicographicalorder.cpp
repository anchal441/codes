#include <bits/stdc++.h>
using namespace std;
void lexicographical(int n,int arr[],int num,int index){
	if(n+1>num){
		return;
	}
	if(num<=n){
		arr[index]=num;
	}
	cout<<arr[index];
	return lexicographical(n,arr,++num,++index);


}
int main(){
	int n;
	cin>>n;
	int arr[n+1];
	lexicographical(n,arr,0,0);
}