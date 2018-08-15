#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	int arr1[n];
	for(int i=0;i<n;i++)
		cin>>arr1[i];
	cin>>m;
	int arr2[m];
	for(int i=0;i<m;i++)
		cin>>arr2[i];
	int z=max(n,m),a;
	int arr3[z+1]={0};
	for(int i=n-1,j=m-1,k=0;i>=0||j>=0;i--,j--,k++)
	{
		if(i>=0&&j>=0)a=arr2[j]+arr1[i];
		else if(i<0)a=arr2[j];
		else a=arr1[i];
		arr3[k]+=a;
		if(arr3[k]>9)
		{
			arr3[k]=arr3[k]%10;
			arr3[k+1]+=1;
		}
	}
	if(arr3[z]!=0)
		cout<<arr3[z]<<",";
	for(int j=z-1;j>=0;j--)
		cout<<" "<<arr3[j]<<",";
	cout<<" END";
}