// LeetCode Problem 125, Link: https://leetcode.com/problems/valid-palindrome/

#include <iostream>
using namespace std;

bool isAlphanum(char ch)
{
    if ((ch >= '0' && ch <= '9') ||
        (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }

    return false;
}

bool isPalindrome(string str)
{
    int st = 0, ed = str.length() - 1;

    while (st < ed)
    {
        if (!isAlphanum(str[st]))
        {
            st++;
        }

        if (!isAlphanum(str[ed]))
        {
            ed--;
        }

        if (tolower(str[st]) != tolower(str[ed]))
        {
            cout << "The string is not a palindrome." << endl;
            return false;
        }
        st++;
        ed--;
    }

    return true;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    if (isPalindrome(str))
    {
        cout << "The string is a palindrome." << endl;
    }

    return 0;
}