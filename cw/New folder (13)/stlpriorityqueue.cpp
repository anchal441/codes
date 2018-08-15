#include <iostream>
#include <queue>
using namespace std;

class comparator{
public:
	bool operator()(int a,int b){
		return a>b;
	}
};

void printBestK(int arr[],int n,int k){

	priority_queue<
}

int main(){
	int arr[10];
	int n;
	cin>>n>k;
	for(int i=0;i<n;++i){
		cin>>arr;
	}
	printBestK(arr,n,k);
}
