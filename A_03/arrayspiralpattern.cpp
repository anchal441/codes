#include <iostream>
using namespace std;

	int a[1002][1002];
/*
long long int count=1,j,k,l,m,n;
cin>>n;
int a[n][n];
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cin>>a[i][j];
	}
}
    for(int i=0;i<(n+1)/2;i++)
    {
        for(j=i;j<n-i;j++)
        {
           // a[i][j]=count;
        	cout<<a[i][j];
            count++;
        }j--;
        if(count>(n*n))break;
        for(k=i+1;k<n-i;k++)
        {
            //a[k][j]=count;
            cout<<a[k][j];
            count++;
        }k--;
        if(count>(n*n))break;
        for(l=j-1;l>=i;l--)
        {
            //a[k][l]=count;
            cout<<a[k][l];
            count++;
        }l++;

        if(count>(n*n))break;

        for(m=k-1;m>i;m--)
        {
            //a[m][l]=count;
            cout<<a[m][l];
            count++;
        }m++;
        if(count>(n*n))break;
    }
}	*/

 
void spiralPrint(int m, int n)
{
    
    int i, k = 0, l = 0;
    int count=0;
    
 
    /*  k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
 
    while (k < m && l < n)
    {
        /* Print the first row from the remaining rows */
        for (i = l; i < n; ++i)
        {
            cout<<a[k][i]<<" ";
             count++;
        }
        k++;
 		if(count>(n*n))break;
        /* Print the last column from the remaining columns */
        for (i = k; i < m; ++i)
        {
            cout<<a[i][n-1]<<" ";
             count++;
        }
        n--;
 		if(count>(n*n))break;
        /* Print the last row from the remaining rows */
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
              cout<<a[m-1][i]<<" ";
               count++;
            }
            m--;
        }
 		if(count>(n*n))break;
        /* Print the first column from the remaining columns */
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                cout<<a[i][l]<<" ";
                count++;
            }
            l++;    
        }  
        //if(count>(m*n))break;      
    }
}
 
/* Driver program to test above functions */
int main()
{	int R,C;
	cin>>R>>C;

  for(int i=0;i<R;i++){
	for(int j=0;j<C;j++){
		cin>>a[i][j];
	}
}
 
    spiralPrint(R, C);
   
}