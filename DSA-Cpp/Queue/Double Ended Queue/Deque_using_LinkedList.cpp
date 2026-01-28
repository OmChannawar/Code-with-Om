/* #include <iostream>
using namespace std;

//------------------------- Node Definition -------------------------
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

//------------------------- Queue Class -----------------------------
class Queue
{
    Node *head; // Front of queue
    Node *tail; // Rear of queue

public:
    // Constructor using body + NULL
    Queue()
    {
        head = NULL;
        tail = NULL;
    }

    void enqueueF(int data)
    {
        Node *newNode = new Node(data);

        if (isEmpty())
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }

        cout << ">>>" << data << " pushed into queue\n";
    }
    
    // Insert an element at the rear (O(1))
    void enqueueR(int data)
    {
        Node *newNode = new Node(data);

        if (isEmpty())
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }

        cout << ">>>" << data << " pushed into queue\n";
    }

    // Remove element from front (O(1))
    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue is EMPTY\n";
            return;
        }

        int removed = head->data;
        Node *temp = head;
        head = head->next;
        delete temp;

        // If queue becomes empty, reset tail
        if (head == NULL)
            tail = NULL;

        cout << removed << " popped from queue\n";
    }

    // Show the element at the front
    void front() const
    {
        if (isEmpty())
        {
            cout << "Queue is EMPTY\n";
            return;
        }
        cout << "Front element: " << head->data << "\n";
    }

    // Check if queue is empty
    bool isEmpty() const
    {
        return head == NULL;
    }

    // Display all elements without deleting them
    void display() const
    {
        if (isEmpty())
        {
            cout << "Queue is EMPTY\n";
            return;
        }

        Node *temp = head;
        cout << "Queue elements: ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

//------------------------- Main Program ----------------------------
int main()
{
    cout << "Queue Implementation using Linked List\n";

    Queue q;
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
            cout << ">>> Enter value to push: ";
            cin >> val;
            q.enqueueF(val);
            break;

        case 2:
            q.pop();
            break;

        case 3:
            q.front();
            break;

        case 4:
            q.display();
            break;

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (ch != 5);

    return 0;
} */