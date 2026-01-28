/*
Functions in Strings:-
    1. length() - Returns the length of the string.
    2. find() - Searches for a substring within the string and returns its position.
    3. erase() - Removes a portion of the string.
    4. substr() - Returns a substring from the string.
    5. getline() - Reads a line of text into the string.
    6. append() - Appends a string to the end of another string.
    7. compare() - Compares two strings.
    8. iswalnum() - Checks if a character is alphanumeric.
*/

#include <iostream>
using namespace std;

int main()
{
    string str = "Hello, World!";
    cout << "The length of the string is: " << str.length() << endl;

    string str1 = "Hello ";
    string str2 = "World";
    string str3 = str1 + str2;
    cout << "Concatenated string: " << str3 << endl;

    return 0;
}