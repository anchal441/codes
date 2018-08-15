#include <bits/stdc++.h>
using namespace std;
class Polynomial{
	int * coefficients;
	int degree;
public:
	Polynomial(int n) {
		coefficients = new int[n];
		degree = n - 1;
		//input coefficients
		cout << "Enter coefficients\n";
		for (int i = 0; i < n; ++i) {
			cin >> coefficients[i];
		}
	}   
	Polynomial(const Polynomial& P) {
		//deep copying
		// coefficients = P.coefficients;		NO!! NO!!
		degree = P.degree;
		coefficients = new int[degree + 1];

		//copying the arr
		for (int i = 0; i <= degree; ++i) {
			coefficients[i] = P.coefficients[i];
		}
	}       

int main(){

}