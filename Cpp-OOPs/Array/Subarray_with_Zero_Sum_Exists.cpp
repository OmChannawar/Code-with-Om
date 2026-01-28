#include <iostream>
using namespace std;

bool subArrayWithZeroSum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == 0)
                return true;
        }
    }
    return false;
}

int main()
{
    int n, arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (subArrayWithZeroSum(arr, n))
        cout << "Yes, a subarray with 0 sum exists.";
    else
        cout << "No subarray with 0 sum found.";

    return 0;
}


/*OUTPUT

PS D:\Om\Practice> cd "d:\Om\Practice\C++\Array\" ; if ($?) { g++ Subarray_with_Zero_Sum_Exists.cpp -o Subarray_with_Zero_Sum_Exists } ; if ($?) { .\Subarray_with_Zero_Sum_Exists }
Enter number of elements: 5
Enter 5 elements: 4 2 -3 1 6
Yes, a subarray with 0 sum exists.
PS D:\Om\Practice\C++\Array> cd "d:\Om\Practice\C++\Array\" ; if ($?) { g++ Subarray_with_Zero_Sum_Exists.cpp -o Subarray_with_Zero_Sum_Exists } ; if ($?) { .\Subarray_with_Zero_Sum_Exists }
Enter number of elements: 4
Enter 4 elements: 1 2 3 4
No subarray with 0 sum found.

*/