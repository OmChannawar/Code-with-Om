// Name:- Om  Channawar
// PRN:- 202401110044
// Batch:- CSE(AI ML)_A2

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool endsWith7 = (n % 10 == 7 || n % 10 == -7); // handles negative numbers too
    bool divisibleBy7 = (n % 7 == 0);
    bool isBuzz = endsWith7 || divisibleBy7;

    if (isBuzz)
    {
        cout << n << " is a Buzz number because it ";
        if (endsWith7)
            cout << "ends with 7." << endl;
        else
            cout << "is divisible by 7." << endl;
    }
    else
    {
        cout << n << " is not a Buzz number." << endl;
    }

    return 0;
}

/*OUTPUT

PS D:\Om\Practice\C++\Number_System> cd "d:\Om\Practice\C++\Number_System\" ; if ($?) { g++ buzz_number.cpp -o buzz_number } ; if ($?) { .\buzz_number }
Enter a number: 14
14 is a Buzz number because it is divisible by 7.
PS D:\Om\Practice\C++\Number_System> cd "d:\Om\Practice\C++\Number_System\" ; if ($?) { g++ buzz_number.cpp -o buzz_number } ; if ($?) { .\buzz_number }
Enter a number: 21
21 is a Buzz number because it is divisible by 7.
PS D:\Om\Practice\C++\Number_System> cd "d:\Om\Practice\C++\Number_System\" ; if ($?) { g++ buzz_number.cpp -o buzz_number } ; if ($?) { .\buzz_number }
Enter a number: 25
25 is not a Buzz number.
PS D:\Om\Practice\C++\Number_System> cd "d:\Om\Practice\C++\Number_System\" ; if ($?) { g++ buzz_number.cpp -o buzz_number } ; if ($?) { .\buzz_number }
Enter a number: 77
77 is a Buzz number because it ends with 7.

*/