#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)        //Time Complexity:- o(n^2)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    cout << "Sorted array: ";

    for(int i = 0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    int arr[100];
    cout << "Start entering the numbers of the array: ";

    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    selectionSort(arr, n);

    return 0;
}