#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    if (n < 0)
    {
        cout << "Factorial of a negative number is not defined." << endl;
        return 0;
    }

    for (int i = n; i >= 1; i--)
    {
        fact = fact * i;
    }

    cout << "Factorial of " << n << " is " << fact << endl;

    return 0;
}

int main()
{
    int number;
    cout << "Enter the number for foactorial: ";
    cin >> number;

    factorial(number);

    return 0;
}