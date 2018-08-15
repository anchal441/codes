#include <iostream>
using namespace std;
int main()
{
	int basic,grade,t_sal,hra,da,allow,pf;
	cin>>basic;
	cin>>grade;
	hra=0.20*basic;
	da=0.50*basic;
	pf=0.11*basic;
	if(grade=='A'){
		allow=1700;
	}
	else if(grade='B'){
		allow=1500;
	}
	else if(grade=='C'){
		allow=1300;
	}
	else{
		cout<<"invalid";
	}
	t_sal=basic+hra+da+allow-pf;
	cout<<"the total sal is "<<t_sal;
}