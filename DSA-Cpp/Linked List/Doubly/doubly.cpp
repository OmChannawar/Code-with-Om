/*
    Topic : Doubly Linked List Implementation (with Head & Tail)
    Developed and Implemented by: Om Channawar
    Date  : Nov 2025

    ---------------------------------- THEORY ----------------------------------

    What is a Doubly Linked List?

    A Doubly Linked List is a linear data structure where each node contains:
        -> data : the value stored in the node
        -> next : pointer to the next node in the list
        -> prev : pointer to the previous node in the list

    Unlike a singly linked list, we can traverse a doubly linked list:
        -> Forward  : using next pointers (from head to tail)
        -> Backward : using prev pointers (from tail to head)

    Main Pointers:
        -> head : points to the first node
        -> tail : points to the last node

    Advantages:
        -> Bidirectional traversal (forward and backward)
        -> Easy deletion of last node using tail pointer (O(1))
        -> Can move back and forth in the list

    Disadvantages:
        -> Extra memory for 'prev' pointer
        -> Slightly more complex insertion and deletion logic

    This Program Supports:
        -> Insert at front (pushFront)
        -> Insert at back (pushBack)
        -> Delete from front (popFront)
        -> Delete from back (popBack)
        -> Search for an element (search)
        -> Display from head to tail (displayForward)
        -> Display from tail to head (displayBackward)
        -> Reverse the entire list (reverse)
*/

#include <iostream>
using namespace std;

// ----------------------------- NODE DEFINITION -----------------------------

class Node
{
public:
    int data;   // value stored in the node
    Node *next; // pointer to next node
    Node *prev; // pointer to previous node

    // Constructor to initialize a new node with given value
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// -------------------------- DOUBLY LINKED LIST CLASS -----------------------

class DoublyList
{
    Node *head; // points to the first node
    Node *tail; // points to the last node

public:
    // Constructor: initially list is empty
    DoublyList()
    {
        head = tail = NULL;
    }

    // ------------------------ INSERTION OPERATIONS ------------------------

    // Insert a new node at the beginning of the list
    void pushFront(int val)
    {
        Node *newNode = new Node(val);

        // If list is empty, head and tail both point to newNode
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            // Link new node before the current head
            newNode->next = head;
            head->prev = newNode;
            head = newNode; // update head to new node
        }
    }

    // Insert a new node at the end of the list
    void pushBack(int val)
    {
        Node *newNode = new Node(val);

        // If list is empty, head and tail both point to newNode
        if (tail == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            // Link new node after the current tail
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode; // update tail to new node
        }
    }

    // ------------------------ DISPLAY OPERATIONS --------------------------

    // Traverse from head to tail and print the list
    void displayForward()
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }

        cout << "List (Forward): ";
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Traverse from tail to head and print the list
    void displayBackward()
    {
        if (tail == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }

        cout << "List (Backward): ";
        Node *temp = tail;

        while (temp != NULL)
        {
            cout << temp->data << " <=> ";
            temp = temp->prev;
        }
        cout << "NULL" << endl;
    }

    // ------------------------ DELETION OPERATIONS -------------------------

    // Delete node from the front (head)
    void popFront()
    {
        if (head == NULL)
        {
            cout << "List is empty. Cannot delete from front." << endl;
            return;
        }

        // Case 1: Only one node in the list
        if (head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }

        // Case 2: More than one node
        Node *temp = head;
        head = head->next; // move head to next node
        head->prev = NULL; // new head has no previous node
        temp->next = NULL; // detach old head

        delete temp; // free memory
    }

    // Delete node from the back (tail)
    void popBack()
    {
        if (tail == NULL)
        {
            cout << "List is empty. Cannot delete from back." << endl;
            return;
        }

        // Case 1: Only one node in the list
        if (head == tail)
        {
            delete tail;
            head = tail = NULL;
            return;
        }

        // Case 2: More than one node
        Node *temp = tail;
        tail = tail->prev; // move tail to previous node
        tail->next = NULL; // new tail has no next node
        temp->prev = NULL; // detach old tail

        delete temp; // free memory
    }

    // --------------------------- SEARCH OPERATION -------------------------

    // Search for a key in the list and print its index (0-based)
    void search(int key)
    {
        if (head == NULL)
        {
            cout << "List is empty. Cannot search." << endl;
            return;
        }

        Node *temp = head;
        int idx = 0;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                cout << "Element " << key << " found at index " << idx << "." << endl;
                return;
            }
            temp = temp->next;
            idx++;
        }

        cout << "Element " << key << " not found in the list." << endl;
    }

    // --------------------------- REVERSE OPERATION ------------------------

    /*
        Reverse the Doubly Linked List

        Logic:
        --------
        For each node:
            -> swap its next and prev pointers
        At the end:
            -> swap head and tail pointers

        Example: 10 <=> 20 <=> 30 <=> NULL

        After reverse:
            30 <=> 20 <=> 10 <=> NULL
    */
    void reverse()
    {
        if (head == NULL || head->next == NULL)
        {
            // Empty list or single node: nothing to reverse
            return;
        }

        Node *curr = head;
        Node *temp = NULL;

        // Traverse through the list
        while (curr != NULL)
        {
            // Swap next and prev for current node
            temp = curr->next; // store original next
            curr->next = curr->prev;
            curr->prev = temp;

            // Move to the original next (which is now in temp)
            curr = temp;
        }

        // Finally, swap head and tail pointers
        temp = head;
        head = tail;
        tail = temp;

        cout << "List has been reversed." << endl;
    }
};

// ------------------------------- MAIN FUNCTION -----------------------------

int main()
{
    DoublyList dll;
    int choice, val;

    while (true)
    {
        cout << "\nDoubly Linked List Menu\n";
        cout << "1. Insert at Front\n";
        cout << "2. Insert at Back\n";
        cout << "3. Delete Front\n";
        cout << "4. Delete Back\n";
        cout << "5. Search\n";
        cout << "6. Display Forward\n";
        cout << "7. Display Backward\n";
        cout << "8. Reverse List\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            dll.pushFront(val);
            break;

        case 2:
            cout << "Enter value: ";
            cin >> val;
            dll.pushBack(val);
            break;

        case 3:
            dll.popFront();
            break;

        case 4:
            dll.popBack();
            break;

        case 5:
            cout << "Enter value to search: ";
            cin >> val;
            dll.search(val);
            break;

        case 6:
            dll.displayForward();
            break;

        case 7:
            dll.displayBackward();
            break;

        case 8:
            dll.reverse();
            break;

        case 9:
            cout << "Exiting..." << endl;
            return 0;

        default:
            cout << "Invalid choice. Try again." << endl;
        }
    }
}