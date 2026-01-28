// Here, in this code I will be implementing a stack data structure using a linked list in C++.

#include <iostream>
#include <list>
using namespace std;

class Stack
{
    list<int> ll;

public:
    void push(int val)
    {
        // Using push_front means the 'front' of the list is the 'top' of our stack.
        ll.push_front(val);
    }

    void pop()
    {
        // Check if the stack is empty before popping
        if (ll.empty())
        {
            cout << "Stack underflow: Cannot pop from an empty stack." << endl;
            return;
        }
        // Remove the front element which is the top of the stack
        ll.pop_front();
    }

    int top()
    {
        // Check if the stack is empty before accessing the top element
        if (ll.empty())
        {
            cout << "Stack is empty: No top element." << endl;
            return -1;
        }
        // Return the front element which is the top of the stack
        return ll.front();
    }

    bool empty()
    {
        return ll.empty();
    }

    void display()
    {
        // Check if the stack is empty
        if (ll.empty())
        {
            cout << "Stack is empty." << endl;
            return;
        }

        // Displaying the stack elements
        cout << "-- TOP --" << endl;
        for (auto const &element : ll) // 'auto' keyword tells the compiler to identify the type automatically
        {
            cout << "|  " << element << "  |" << endl;
            cout << "-------" << endl;
        }
        cout << "-- BOTTOM --" << endl;
    }
};

int main()
{
    Stack s;
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
        // Check if input is valid
        if (!(cin >> ch))
        {
            cout << "Invalid input. Please enter a number." << endl;
            // Buffer cleanup
            cin.clear();             // clear error flags
            cin.ignore(10000, '\n'); // discard invalid input
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
            cout << "Stack elements (Top to Bottom): " << endl;
            s.display();
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