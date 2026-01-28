#include <iostream>
#include <deque>
using namespace std;

// Display deque without modifying original
void display(deque<int> dq)
{
    if (dq.empty())
    {
        cout << "Deque is EMPTY\n";
        return;
    }

    cout << "Deque elements: ";
    for (int x : dq)
        cout << x << " ";
    cout << "\n";
}

int main()
{
    cout << "Double-Ended Queue (DEQUE) Implementation using STL deque\n";

    deque<int> dq;
    int ch, val;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Push Front\n";
        cout << "2. Push Back\n";
        cout << "3. Pop Front\n";
        cout << "4. Pop Back\n";
        cout << "5. Front Element\n";
        cout << "6. Back Element\n";
        cout << "7. Display\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter value to push at front: ";
            cin >> val;
            dq.push_front(val);
            cout << val << " pushed at front\n";
            break;

        case 2:
            cout << "Enter value to push at back: ";
            cin >> val;
            dq.push_back(val);
            cout << val << " pushed at back\n";
            break;

        case 3:
            if (dq.empty())
                cout << "Deque is EMPTY, cannot pop\n";
            else
            {
                cout << dq.front() << " popped from front\n";
                dq.pop_front();
            }
            break;

        case 4:
            if (dq.empty())
                cout << "Deque is EMPTY, cannot pop\n";
            else
            {
                cout << dq.back() << " popped from back\n";
                dq.pop_back();
            }
            break;

        case 5:
            if (dq.empty())
                cout << "Deque is EMPTY\n";
            else
                cout << "Front element: " << dq.front() << "\n";
            break;

        case 6:
            if (dq.empty())
                cout << "Deque is EMPTY\n";
            else
                cout << "Back element: " << dq.back() << "\n";
            break;

        case 7:
            display(dq);
            break;

        case 8:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (ch != 8);

    return 0;
}