#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;

	for(int curnum=2;curnum<=n;++curnum){

		bool isprime=true;
		int factor=2;
		int div=2;
		while(div<curnum){
			if(curnum%div==0){
				isprime=false;
				break;
			}
			++div;
		}
		if(isprime==true){
			cout<<curnum<<" ";

		}
	}
}