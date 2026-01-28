#include <iostream>
using namespace std;

int partition(int arr[], int st, int en)
{
    int pivot = arr[en];
    int idx = st - 1;
    for (int j = st; j < en; j++)
    {
        if (arr[j] <= pivot)
        {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[en], arr[idx]);
    return idx;
}

void quickSort(int arr[], int st, int en)
{
    if (st < en)
    {
        int pvt = partition(arr, st, en);
        quickSort(arr, st, pvt - 1);
        quickSort(arr, pvt + 1, en);
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}