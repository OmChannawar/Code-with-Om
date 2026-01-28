#include <iostream>
using namespace std;

int maxProductSubarray(int arr[], int n)
{
    int maxProd = arr[0];
    int minProd = arr[0];
    int result = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < 0)
        {
            int temp = maxProd;
            maxProd = minProd;
            minProd = temp;
        }

        if (arr[i] > maxProd * arr[i])
            maxProd = arr[i];
        else
            maxProd = maxProd * arr[i];

        if (arr[i] < minProd * arr[i])
            minProd = arr[i];
        else
            minProd = minProd * arr[i];

        if (maxProd > result)
            result = maxProd;
    }
    return result;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Maximum product subarray = " << maxProductSubarray(arr, n);

    return 0;
}

/*OUTPUT

PS D:\Om\Practice\C++\Array> cd "d:\Om\Practice\C++\Array\" ; if ($?) { g++ Maximum_Product_Subarray.cpp -o Maximum_Product_Subarray } ; if ($?) { .\Maximum_Product_Subarray }
Enter number of elements: 4
Enter 4 elements: 2 3 -2 4
Maximum product subarray = 6

*/