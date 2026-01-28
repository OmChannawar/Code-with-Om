/*
Here, in this I will be implementing a stack data structure using the C++ Standard Template Library (STL) vector.
A stack is a linear data structure that follows the Last In First Out (LIFO) principle
*/

#include <iostream>
#include <vector>
using namespace std;

class Stack
{
    vector<int> v;

public:
    void push(int val) // O(1) & Push Function
    {
        v.push_back(val);
    }

    void pop() // O(1) & Pop Function
    {
        v.pop_back();
    }

    int top() // O(1) & Top Function
    {
        return v[v.size() - 1];
    }

    bool empty()
    {
        return v.size() == 0;
    }

    void display() // O(n) & Display Function
    {
        for (int i = v.size() - 1; i >= 0; i--)
        {
            cout << v[i] << "\n";
        }
        cout << endl;
    }
};

int main()
{
    Stack s;

    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Top" << endl;
    cout << "4. Display" << endl;
    cout << "5. Exit" << endl;

    int choice, value;

    cout << "Enter your choice: ";
    cin >> choice;

    while (choice != 5)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
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
            if (!s.empty())
            {
                cout << "Stack elements are: " << endl;
                s.display();
            }
            else
            {
                cout << "Stack is empty." << endl;
            }
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << "Enter your choice: ";
        cin >> choice;
    }

    return 0;
}