#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;
    int a[100][100];
    cout << "Enter elements of the matrix: \n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    int top = 0, bottom = r - 1, left = 0, right = c - 1;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
            cout << a[top][i] << " ";
        top++;

        for (int i = top; i <= bottom; i++)
            cout << a[i][right] << " ";
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
                cout << a[bottom][i] << " ";
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                cout << a[i][left] << " ";
            left++;
        }
    }
    return 0;
}

/*OUTPUT

PS D:\Om\Practice\C++\Matrix> cd "d:\Om\Practice\C++\Matrix\" ; if ($?) { g++ Spiral_Traversal_of_Matrix.cpp -o Spiral_Traversal_of_Matrix } ; if ($?) { .\Spiral_Traversal_of_Matrix }
Enter number of rows and columns: 3 3
Enter elements of the matrix: 
1 2 3
4 5 6
7 8 9
1 2 3 6 9 8 7 4 5 

*/