#include <iostream>
using namespace std;

int isAutomorphic(int n)
{
    int square = n * n;
    int temp = n;
    int div = 1;

    // Step 1: Create divisor equal to 10^digits
    // Example: for n = 25 → div = 100
    while (temp > 0)
    {
        div *= 10;
        temp /= 10;
    }

    // Step 2: Check last digits of square
    if (square % div == n)
    {
        cout << n << " is an Automorphic number." << endl;
    }
    else
    {
        cout << n << " is not an Automorphic number." << endl;
    }

    return 0;
}

int main()
{
    int number;
    cout << "Enter the number to be checked: ";
    cin >> number;

    isAutomorphic(number);

    return 0;
}

/*OUTPUT

PS D:\Om\Practice\C++\Number_System> cd "d:\Om\Practice\C++\Number_System\" ; if ($?) { g++ automorphic.cpp -o automorphic } ; if ($?) { .\automorphic }
Enter the number to be checked: 25
25 is an Automorphic number.
PS D:\Om\Practice\C++\Number_System> cd "d:\Om\Practice\C++\Number_System\" ; if ($?) { g++ automorphic.cpp -o automorphic } ; if ($?) { .\automorphic }
Enter the number to be checked: 20
20 is not an Automorphic number.

*/