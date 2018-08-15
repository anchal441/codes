#include<iostream>
using namespace std;
int main()
{
	float step,init,final;
	cin>>step>>init>>final;
	while(init<=final){
		double cel=5.0/9.0*(init-32);
		cout<<init<<"\t"<<cel<<"\n";
		init=init+step;
	}
	

	

}
