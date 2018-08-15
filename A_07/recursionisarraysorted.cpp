#include<iostream>
using namespace std;
int rec_check(long long int arr[],int a,int n)
{
	if (a==n)
		return(1);
	if(arr[a]<=arr[a+1])
		return(rec_check(arr,a+1,n));
    else
    	return(0);
}

int main()
{
	int n;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int check=rec_check(arr,0,n-1);
	if(check==0)
		cout<<"false"<<endl;
	else
		cout<<"true"<<endl;
	return(0);
}