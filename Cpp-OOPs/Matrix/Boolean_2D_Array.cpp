#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;
    int a[100][100];
    cout << "Enter elements of the matrix: \n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    int maxRow = -1;
    int j = m - 1;

    for (int i = 0; i < n; i++)
    {
        while (j >= 0 && a[i][j] == 1)
        {
            j--;
            maxRow = i;
        }
    }

    cout << "Max row with all 1s = " << maxRow;
    return 0;
}


/*OUTPUT

PS D:\Om\Practice> cd "d:\Om\Practice\C++\Matrix\" ; if ($?) { g++ Boolean_2D_Array.cpp -o Boolean_2D_Array } ; if ($?) { .\Boolean_2D_Array }
Enter number of rows and columns: 3 4
Enter elements of the matrix: 
0 0 0 0
0 0 1 1 
0 1 1 1 
Max row with all 1s = 2

*/