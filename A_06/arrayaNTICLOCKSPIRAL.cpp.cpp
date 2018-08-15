#include <iostream>
using namespace std;
int main(){
   int count=0,j,k,l,s,m,n,i;
   cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(j=0;j<(m+1)/2;j++)
    {   //cout<<"vallue of j"<<j ;
        for(i=j;i<m-j;i++)
        {
            cout<<a[i][j]<<", ";
            count++;
            //cout<<"value in loop 1 of i and j\n"<<i<<j;
        }--i;
        if(count>(m*n))break;
        for(k=j+1;k<=n-j-1;k++)
        {
            cout<<a[i][k]<<", ";
            count++;
            //cout<<"value in loop 1 of i and j and k\n"<<i<<j<<k;
        }k--;
        if(count>(m*n))break;
        for(l=m-j-2;l>=j;l--)
        {
            cout<<a[l][k]<<", ";
            count++;
            //cout<<"value in loop 1 of i and j and k and l\n"<<i<<j<<k<<l;
        }l++;
        if(count>(m*n))break;
        for(s=n-j-2;s>j;s--)
        {
            cout<<a[l][s]<<", ";
            count++;
            //cout<<"value in loop 1 of i and j and k and l and s\n"<<i<<j<<k<<l<<s;
        }s++;
        if(count>(m*n))break;
    }
    cout<<"END";
}