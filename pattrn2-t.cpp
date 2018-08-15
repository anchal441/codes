#include <iostream>
using namespace std;
int main()
{
	//read N
	int n;
	cin>>n;
	//curline=1
	int curline=1;
	//while curline<=n
	while(curline<=n){
		//print space
		//space =1
		int space = 1;
		//while space <= n-curline
		while (space <= n -curline){
			//print space
			cout<<" ";
			space = space + 1;

		}

		//print values
		//val=1
		int val=1;
		int nval=1;
		while (nval <=2*curline-1){
			cout<< val;
			val=val+1;
			nval= nval+1;

		}
		cout<<"\n";
		curline=curline+1;
	}return 0;
}