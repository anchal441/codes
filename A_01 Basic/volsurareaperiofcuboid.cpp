#include <iostream>
using namespace std;
int main()
{
	int l,b,h,vol,tsurarea,peri;
	cout<<"enter the values of l,b,h";
	cin>>l;
	cin>>b;
	cin>>h;
	vol=l*b*h;
	cout<<vol<<endl;
	peri=4*(l+b+h);
	cout<<peri<<endl;
	tsurarea=2*((l*b)+(b*h)+(h*l));
	cout<<tsurarea<<endl;
}