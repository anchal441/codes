
#include <iostream>

#include <string>

using namespace std;

int main()

{
 

cout << " please enter your name \n";

 

string name;

cin >> name;
 
for(int i = 1; i < name.length(); i+=2)
 {

 cout << name.at(i);  

 }

cout<<"\n";
}
