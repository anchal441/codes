#include <iostream>
using namespace std;
int main()
{
	int a,b,c,sol1,sol2;
	cin>>a;
	cin>>b;
	cin>>c;
	sol1=(-b+((b^2)-4*a*c))/(2*a);
		cout<<"the sol1 is"<<sol1;
	sol2=(-b-((b^2)-4*a*c))/(2*a);	
		cout<<"the sol2 is"<<sol2;
}