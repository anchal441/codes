#include <iostream>
#include <map>
#include <utility>
using namespace std;
void removeduplicate(int arr[],int n){
	int * ans=new int[n];
	map<int,int> m;
	//building hashmap

	for(int i=0;i<n;++i){
		int cur=arr[i];
		m[cur]=cur;
	}
	for(map<int,int>::iterator it= m.begin(); it != m.end(); ++it){
		arr[i]=it->second;
		++i;
	}
	n=i;
	//delete ans

	delete ans;

}
int main(){
	//remove duplicates
	int arr[10];
	
}