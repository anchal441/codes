#include <iostream>
using namespace std;
int main()
{
	char x;
	cin>>x;
	int y=(int) x;

	for(int i=1;i<6;i++)
	{
		
		char c=(char) y+i;
		cout<<c<<"\n";
	}
}