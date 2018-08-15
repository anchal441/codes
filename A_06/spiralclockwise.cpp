  #include <iostream>
using namespace std;
int main(){
   int count=0,j,k,l,s,m,n;
   cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<(n+1)/2;i++)
    {
        for(j=i;j<n-i;j++)
        {
            cout<<a[i][j]<<", ";
            count++;
        }j--;
        if(count>=(m*n))break;
        for(k=i+1;k<m-i;k++)
        {
            cout<<a[k][j]<<", ";
            count++;
        }k--;
        if(count>=(m*n))break;
        for(l=n-i-2;l>=i;l--)
        {
            cout<<a[k][l]<<", ";
            count++;
        }l++;
        if(count>=(m*n))break;
        for(s=m-i-2;s>=i+1;s--)
        {
            cout<<a[s][l]<<", ";
            count++;
        }s++;
        if(count>=(m*n))break;
    }
    cout<<"END";
}