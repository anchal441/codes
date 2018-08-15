#include <iostream>
using namespace std;

void bubblesort(int arr[], int be, int end)
{
    if(be>end) return;
    for( int i=be; i<end; i++)
    {
        if(arr[i]>arr[i+1])
        {
            int tmp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=tmp;
        }
    }
    
    bubblesort(arr, be, end-1);
    
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0; i<n; i++) {
        cin>>arr[i];}
    
    bubblesort(arr, 0, n-1);
    for(i=0; i<n; i++) {
        cout<<arr[i]<<" ";}
	
}