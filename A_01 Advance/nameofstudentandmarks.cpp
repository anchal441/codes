#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string name[100];
    int a[n][5];
    for (int i = 0; i < n; ++i)
    {
        cin>>name[i];
        for(int j=0;j<5;j++)
        cin>>a[i][j];
    }
    for (int i = 0; i < n; ++i)
    {
        sort(a[i],a[i]+5);
        cout<<name[i];
        cout<<(float)(a[i][3]+a[i][4])/2<<endl;
    }
}