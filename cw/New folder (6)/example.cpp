#include <iostream>
#include <cstring>
using namespace std;
class customer{
public:
	char name[20];
	char phone[10];
	char acc[10];
	int bal;
	customer(char arr[],char ph[],char ac[],int b){
		strcpy(name,arr);
		strcpy(phone,ph);
		strcpy(acc,ac);
		bal=b;
	}	
	updatephone (customer &p,newphone){
		strcpy(p.phone,newphone);
	}

};
int main(){
	customer p("rajat","1234","sb",10000);


}