#include <iostream>
using namespace std;
int main()
{
	char x;
	cin>>x;
	int y=(int) x;
	if(y>=65&&y<=90)
	{
		cout<<"U";

	} 
	else if(y>=97&&y<=122){
		cout<<"L";

	}
	else{
		cout<<"I";
	}
}