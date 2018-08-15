#include <bits/stdc++.h>
using namespace std;

void CheckBalance(string s, stack<char> &v) {
	int flag = 0;
	for (int i = 0; s[i] != '\0'; i++) {
	   if (s[i] == ')') {
			if (s[i + 1] != '\0' && s[i + 1] == ')') {
				while (v.top()!='(' ){
					v.pop();
				}
				v.pop();
				if (v.top() == '(') {
					flag = 1;
					break;
				}
			}
			else{
				while(v.top()!='('){
					v.pop();
				}
				v.pop();
			}
		}
		else{
			v.push(s[i]);
		}

	}

	if (flag == 1) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

}
int main() {
	stack<char> v;
	string s;
	getline(cin,s);
	CheckBalance(s, v);
}