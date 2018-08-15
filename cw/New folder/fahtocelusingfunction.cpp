#include <iostream>
using namespace std;
void fahtocel(int init,int final,int step){
	
		for(int fah=init;fah<=final;fah=fah+step){
		double cel = 5.0/ 9 * (fah - 32);	//to get decimal part also
		cout << init << "\t" << cel << "\n"; 
		
	}
}
int main(){
	int init,final,step;
	cin>>init>>final>>step;
	
	fahtocel(init,final,step);
}
