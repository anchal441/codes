#include <iostream>
using namespace std;

int main()
{
    long long rows, coef = 1;

    //cout << "Enter number of rows: ";
    cin >> rows;

    for(long long int i = 0; i < rows; i++)
    {
        /*for(long long int space = 1; space <= rows-i; space++)
            cout <<"";*/

        for(long long int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            cout << coef << "        ";
        }
        cout << endl;
    }

    return 0;
}