/*#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int j,i;
	for(int i=0;i<=(n/2);i++){

		for(j=0;j<((n/2)-i);j++){
			cout<<"*";}
		for(j=0;j<=((n/2)-i+1);j++){
				cout<<" ";
			}
		for(j=0;j<((n/2)+i);j++){
			cout<<"*";
		}
		cout<<endl;
	}
//second half pattern
	for(i=(n/2)+1;i<n;i++){

		for(j=0;j<=i-(n/2);j++){
			cout<<"*";
		}
		for(j=(i-(n/2)+1);j<(n-(i+1))/2;j++){
			cout<<" ";
		}
		for(j=(n+1-i)/2;j<n;j++)
		{
			cout<<"*";
		}
		cout<<endl;




	}
		


*/
//my program

/*
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n==1||n==3||n==5||n==7||n==9){
	int i,j,count=n/2 ;
	for(int i=0;i<=n/2;++i){
		for(j=1;j<=count+1;++j){
			cout<<"*"<<"\t";}						
		//if(i==0){
		//		cout<<"*"<<"\t";
		//		}
		for(j=1;j<=2*i+1;++j){
			cout<<"\t";
		}
		for(j=1;j<=count+1;++j){
			cout<<"*"<<"\t";
		}
		
			count--;
		cout<<endl;
		
		
	}
	count=2;
	for(int i=n/2-1;i>=0;--i){
		for(j=1;j<=count;++j){
			cout<<"*"<<"\t";			
		}		
		for(j=1;j<=2*i+1;++j){
			cout<<"\t";
		}
		//if(i==0){
		//	for(j=1;j<=count-1;++j){
		//	cout<<"*"<<"\t";
		//}
	//}
		for(j=1;j<=count;++j){
			cout<<"*"<<"\t";
		}
	count++;
		cout<<"\n";
		
		
	}
}}*/

//program of another person
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int i,j,n;
   //n=5;
   cin>>n;
   n/=2;
   n++;
   for(i=0;i<n;i++)
   {
       //cout<<"Line No. "<<i+1<<" ";
       for(j=i; j<n; j++)
       {
           cout<<"*\t";
       }
       for(j=0; j<(2*i+1); j++)
       {
           cout<<'\t';
       }
       for(j=i; j<n; j++)
       {
           cout<<"*\t";
       }

       cout<<endl;
   }
   for(i=n-2;i>=0;i--)
   {
       //cout<<"Line No. "<<i+1<<" ";
       for(j=i; j<n; j++)
       {
           cout<<"*\t";
       }
       for(j=0; j<(2*i+1); j++)
       {
           cout<<'\t';
       }
       for(j=i; j<n; j++)
       {
           cout<<"*\t";
       }

       cout<<endl;
   }
   cout<<endl;
}*/
//the code  which got submitted
#include <iostream>
using namespace std;
int main() {
    int num_of_rows;
    cin >> num_of_rows;
    for (int i = 1; i <= num_of_rows / 2 + 1; i++) {
        for (int j = 1; j <= num_of_rows / 2 + 2 - i; j++) {
            cout << "*" << "\t";
        }
        for (int z = 1; z <= 2 * i - 3; z++) {
            cout << " " << "\t";
        }
        if (i != 1) {
            for (int k = num_of_rows / 2 + 2 - i; k > 0; k--) {
                cout << "*" << "\t";
            }
        }
        else {
            for (int k = num_of_rows / 2 + 1 - i; k > 0; k--) {
                cout << "*" << "\t";
            }

        }
        cout << endl;

    }


    for (int i = num_of_rows / 2; i > 0; i--) {
        for (int j = 1; j <= num_of_rows / 2 + 2 - i; j++) {
            cout << "*" << "\t";
        }
        for (int z = 1; z <= 2 * i - 3; z++) {
            cout << " " << "\t";
        }
        if (i != 1) {
            for (int k = num_of_rows / 2 + 2 - i; k > 0; k--) {
                cout << "*" << "\t";
            }
        }
        else {
            for (int k = num_of_rows / 2 + 1 - i; k > 0; k--) {
                cout << "*" << "\t";
            }

        }
        cout << endl;
    }
}