#include <iostream>
using namespace std;

int main()
{
    int R, C;
    cout << "Enter number of rows and columns: ";
    cin >> R >> C;
    int a[100][100];
    cout << "Enter elements of the matrix: \n";
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> a[i][j];

    int minVal = a[0][0], maxVal = a[0][C - 1];
    for (int i = 1; i < R; i++)
    {
        if (a[i][0] < minVal)
            minVal = a[i][0];
        if (a[i][C - 1] > maxVal)
            maxVal = a[i][C - 1];
    }

    int desired = (R * C + 1) / 2;
    while (minVal < maxVal)
    {
        int mid = (minVal + maxVal) / 2;
        int place = 0;

        for (int i = 0; i < R; i++)
        {
            int low = 0, high = C;
            while (low < high)
            {
                int m = (low + high) / 2;
                if (a[i][m] <= mid)
                    low = m + 1;
                else
                    high = m;
            }
            place += low;
        }

        if (place < desired)
            minVal = mid + 1;
        else
            maxVal = mid;
    }

    cout << "Median = " << minVal;
    return 0;
}


/*OUTPUT

PS D:\Om\Practice\C++\Matrix> cd "d:\Om\Practice\C++\Matrix\" ; if ($?) { g++ Median_of_Matrix.cpp -o Median_of_Matrix } ; if ($?) { .\Median_of_Matrix }
Enter number of rows and columns: 3 3
Enter elements of the matrix: 
1 3 5
2 6 9
3 6 9
Median = 5

*/