/*
C++ has a inbuilt stack container in the Standard Template Library (STL). 
Which includes stack functions like push, pop, top, empty, etc.
But as stack lib doesn't contain the display function we will create by yourself.

Here, I will be implementing a stack data structure using the C++ Standard Template Library (STL) stack.
*/

#include <iostream>
#include <stack>
using namespace std;

void display(stack<int> s)
{
    if (s.empty())
    {
        cout << "Stack is empty." << endl;
        return;
    }

    cout << "-- TOP --" << endl;
    // We'll work with a copy 's' so the original stack is not modified
    while (!s.empty())
    {
        cout << "|  " << s.top() << "  |" << endl;
        cout << "--------" << endl;
        s.pop();
    }
    cout << "-- BOTTOM --" << endl;
}

int main()
{
    stack<int> s; // Correct declaration: lowercase 'stack' and type <int>
    int ch, val;

    cout << "\n--- Stack Menu ---" << endl;
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Top" << endl;
    cout << "4. Display" << endl;
    cout << "5. Exit" << endl;
    cout << "------------------" << endl;

    do
    {
        cout << "Enter your choice: ";
        if (!(cin >> ch))
        {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (ch)
        {
        case 1:
            cout << "Enter value to push: ";
            if (cin >> val)
            {
                s.push(val);
                cout << val << " pushed onto stack." << endl;
            }
            else
            {
                cout << "Invalid value. Push cancelled." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
            }
            break;
        case 2:
            if (!s.empty())
            {
                s.pop();
                cout << "Top element popped." << endl;
            }
            else
            {
                cout << "Stack is empty. Cannot pop." << endl;
            }
            break;
        case 3:
            if (!s.empty())
            {
                cout << "Top element is: " << s.top() << endl;
            }
            else
            {
                cout << "Stack is empty." << endl;
            }
            break;
        case 4:
            // Pass a COPY of the stack to the display function
            display(s);
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
        cout << endl;

    } while (ch != 5);

    return 0;
}