#include<iostream>
using namespace std;
long long int rec_triangle(int n)
{
	if (n==1)
	{
		return(1);
    }
    else
    {  
    	return(n+rec_triangle(n-1));
    }
}
int main()
{
	int n;
	cin>>n;
	long long int sum=rec_triangle(n);
	cout<<sum<<endl;
	return(0);
}