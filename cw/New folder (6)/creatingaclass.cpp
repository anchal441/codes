#include <iostream>
#include <cstring>
using namespace std;
class person{
public:
	char name[10];
	int priority;
	char phone[11];
	person(char arr[],int p,char ph[]){
		strcpy(name,arr);
		priority=p;
		strcpy(phone,ph);
	}

};
int main(){
	person p("sonia",2,"51453");
	cout<<p.name<<" "<<p.priority<<" "<<p.phone<<endl;
}