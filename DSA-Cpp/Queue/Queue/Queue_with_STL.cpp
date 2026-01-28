#include <iostream>
#include <queue>
using namespace std;

void display(queue<int> q)
{
    if (q.empty())
    {
        cout << "Queue is EMPTY\n";
        return;
    }

    cout << "Queue elements: ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";
}

int main()
{
    cout << "Queue Implementation using STL queue\n";

    queue<int> q;
    int ch, val;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Front\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> val;
            q.push(val);
            cout << val << " pushed into queue\n";
            break;

        case 2:
            if (q.empty())
            {
                cout << "Queue is EMPTY, cannot pop\n";
            }
            else
            {
                cout << q.front() << " popped from queue\n";
                q.pop();
            }
            break;

        case 3:
            if (q.empty())
            {
                cout << "Queue is EMPTY\n";
            }
            else
            {
                cout << "Front element: " << q.front() << "\n";
            }
            break;

        case 4:
            display(q);
            break;

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (ch != 5);

    return 0;
}