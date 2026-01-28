#include <iostream>
using namespace std;

void reverseString(string& str)
{
    int st = 0, e = str.length() - 1;
    while(st < e)
    {
        swap(str[st++], str[e--]);
    }

    return;
}

int main()
{
    string str = "Hello, World!";
    cout << "Original String: " << str << endl;

    reverseString(str);
    cout << "Reversed String: " << str << endl; // Note: str remains unchanged in main

    // include the string lib and use the reverse function
    // reverse(str.begin(), str.end());
    
    return 0;
}