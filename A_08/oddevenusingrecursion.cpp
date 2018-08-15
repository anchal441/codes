#include<iostream>
using namespace std;
void rec_print(int n)
{
	if (n==1)
	{
		cout<<'1'<<" ";
		return;
	}
	if(n==0)
	{
		return ;
	}
	
	if(n%2==1)
		{cout<<n<<" ";
		rec_print(n-2);
		cout<<n-1<<" ";}
    else
    	{cout<<n-1<<" ";
		rec_print(n-2);
		cout<<n<<" ";}
}
int main()
{
	int n;
	cin>>n;
	rec_print(n);
	return(0);
}