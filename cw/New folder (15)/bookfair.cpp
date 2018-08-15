#include <iostream>
using namespace std;

int arr[60];
int memo[60];

int maxval(int be,in en,int k){
	if(be>en){
		return 0;
	}

	int pick=maxval(be+k+1,en,k)+arr[be];
	int left=maxval(be+1,en,k);

	return max(pick,left);
}

int main(){
	int satlls;
	int step;

	cin>>stalls>>step;
	for(int i=0;i< stalls;++i){
		cin>>arr[i];
	}
	int ans=sol(0,stalls -1,step);

}