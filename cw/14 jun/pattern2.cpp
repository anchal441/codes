#include <iostream>
using namespace std;
int main()
{


	int nlines;
	cin>>nlines;
	int charline;
	for(int curline=1;curline<=nlines;++curline){
		int nchar=charline;

		bool isfirstvalue=true;
		int val=1;
		if(curline%2==0){
			val=0;
		}

		for(int curchar=1;curchar<=nchar;++curchar){
			cout<<val;
		if(val=0){
			val=1;
		}
		else{
			val=0;
		}
		//val=1-val;

		}cout<<endl;
	}





}