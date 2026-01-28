/*This code is the solution to the LeetCode Problem Statement 20,
which states that given a string s containing just the characters
'(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:
1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string str)
{
    stack<char> st;

    for (int i = 0; i < str.length(); i++) // Tc = O(n); Sc = O(n)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            st.push(str[i]);
        }
        else
        {
            if (st.empty())
                return false;

            char top = st.top();
            if ((str[i] == ')' && top == '(') ||
                (str[i] == '}' && top == '{') ||
                (str[i] == ']' && top == '['))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }

    return st.empty();
}

int main()
{
    string input;

    cout << "--- Valid Parentheses Checker ---" << endl;
    cout << "Enter a string (max 8 characters) containing only '(', ')', '{', '}', '[' and ']': ";
    cin >> input;

    // Check if the input length exceeds the limit of 8
    if (input.length() > 8)
    {
        cout << "Error: Input string exceeds the maximum length of 8." << endl;
        return 1; // Return non-zero to indicate error
    }

    if (isValid(input))
    {
        cout << "Result: The string is VALID." << endl;
    }
    else
    {
        cout << "Result: The string is INVALID." << endl;
    }

    return 0;
}