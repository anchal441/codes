#include <iostream>
using namespace std;
int main()
{
  long long int n;
  cin>>n;
  int arr1[n];
  int arr2[n];
  for(int i=0;i<n;i++){
    cin>>arr1[i];
  }
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n - i; ++j){
      if(j + 1 < n && arr1[j] > arr1[j + 1]){
        //swap
        int tmp = arr1[j];
        arr1[j] = arr1[j + 1];
        arr1[j + 1] = tmp;
      }
    }
  }
  for(int j=0;j<n;j++){
    cin>>arr2[j];
  }
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n - i; ++j){
      if(j + 1 < n && arr2[j] > arr2[j + 1]){
        //swap
        int tmp = arr2[j];
        arr2[j] = arr2[j + 1];
        arr2[j + 1] = tmp;
      }
    }
  }
  
  int i = 0, j = 0;
  int flag=0;
  cout<<"[";
  while (i < n && j < n)
  {
    if (arr1[i] < arr2[j])
      i++;
    else if (arr2[j] < arr1[i])
      j++;
    else 
      { if(flag==0){
        cout<<arr2[j++];
        flag=1; }
        else{
          cout<<", "<<arr2[j++];
        }
      i++;
    }
  }

  cout<<"]";
}
