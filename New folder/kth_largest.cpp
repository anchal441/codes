#include<iostream>
#include<queue>
#include<functional>
using namespace std;

int main(){

   // priority_queue<int> h1; ///Max Heap
    priority_queue<int, vector<int>,greater<int> > h; ///Min Heap
    int n,k;
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    for(int i=0;i<k;i++){
     h.push(arr[i]);   
    }
    for(int i=k;i<n;i++){
        if(h.top()<arr[i])
        {
            h.pop();
            h.push(arr[i]);
        }
    }
    cout<<h.top()<<endl;

}