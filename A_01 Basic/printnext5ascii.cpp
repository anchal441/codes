#include <iostream>
using namespace std;
int main()
{
	int ch;
	cin>>ch;
	while(ch>=65&&ch<=90)
	{
		for(int i=1;i<=5;i++)
		{   
			cout<<ch;
			ch++;
			
			if(ch<=ch+5)
			{
				break;
			}
		}	
	}
}