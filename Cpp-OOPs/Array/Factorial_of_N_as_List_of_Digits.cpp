#include <iostream>
using namespace std;

void factorial(int n)
{
    int result[5000];
    result[0] = 1;
    int result_size = 1;

    for (int x = 2; x <= n; x++)
    {
        int carry = 0;
        for (int i = 0; i < result_size; i++)
        {
            int val = result[i] * x + carry;
            result[i] = val % 10;
            carry = val / 10;
        }
        while (carry)
        {
            result[result_size] = carry % 10;
            carry /= 10;
            result_size++;
        }
    }

    cout << "Factorial of " << n << " is: ";
    for (int i = result_size - 1; i >= 0; i--)
        cout << result[i];
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    factorial(n);

    return 0;
}


/*OUTPUT

PS D:\Om\Practice\C++\Array> cd "d:\Om\Practice\C++\Array\" ; if ($?) { g++ Factorial_of_N_as_List_of_Digits.cpp -o Factorial_of_N_as_List_of_Digits } ; if ($?) { .\Factorial_of_N_as_List_of_Digits }
Enter a number: 5
Factorial of 5 is: 120

*/