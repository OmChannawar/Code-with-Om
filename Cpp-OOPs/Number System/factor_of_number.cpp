#include<iostream>
using namespace std;

int factor(int n)
{
    if(n < 1)
    {
        cout << "Invalid Input" << endl;
        return -1;
    }

    cout << "Factor of " << n << " are: ";

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            cout << i << ", ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    factor(n);

    return 0;
}