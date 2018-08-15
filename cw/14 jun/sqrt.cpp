#include <iostream>
using namespace std;
int main()
{
	long long int num;
	cin>>num;
	long long int root=0;

	while(root*root<=num){
		++root;
	}

	root=root-1;
	cout<<root;
}