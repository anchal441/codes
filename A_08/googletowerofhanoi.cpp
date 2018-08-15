
#include <iostream>
using namespace std;

int tower(int n, char src, char dest, char helper,int count){
	if (n == 0){
		return count;
	}
	count=tower(n - 1, src, helper, dest,count);
	//Moving ring 1 from C to B
	//Move 1th disc from T1 to T3

	cout << "Move " <<  n << "th disc from T"<< src << " to T" << dest << endl;
	count++;
	//cout<<count;
	count+=tower(n - 1, helper, dest, src,count);
}




int main(){
	int n;
	cin >> n;
	//int count=0;
	cout<<tower(n, '1', '2', '3',0);	
	//cout<<count;	
}