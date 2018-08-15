#include <bits/stdc++.h>
#include <list>
using namespace std;
int main(){
	list<int> l;
	int n;
	cin>>n;
	while(n!=-1){
		l.push_back(n);
		cin>>n;
	}
	int k;
	cin>>k;
	list<int>::iterator it=l.begin();
	int count=k+1;
	while(--count){
		it++;
	}
	list<int>::iterator it1=l.begin();
	while(it!=l.end()){
		it++;
		it1++;

	}
	cout<<*it1<<endl;

}