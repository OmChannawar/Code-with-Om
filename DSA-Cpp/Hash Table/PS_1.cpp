#include <iostream> // Header file for input/output operations
#define SIZE 10     // Size of the hash table (fixed)
using namespace std;

/*
    Structure to store product details.
    'code' acts as the KEY for hashing.
*/
struct Product
{
    int code;    // Unique product code (hash key)
    int stock;   // Quantity available
    float price; // Price of the product
};

/*
    Hash table implemented using an array of structures.
    SIZE is fixed, so this is static hashing.
*/
Product arr[SIZE];

/*
    Initializes the hash table.
    code = -1 indicates an empty slot.
*/
void init()
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i].code = -1; // Mark all positions as empty
    }
}

/*
    Inserts a product into the hash table.
    Uses MODULO hash function and LINEAR PROBING
    for collision resolution.
*/
void insert()
{
    Product p;

    // Taking product details from user
    cout << "\nEnter Product Code: ";
    cin >> p.code;
    cout << "Enter Stock Quantity: ";
    cin >> p.stock;
    cout << "Enter Price: ";
    cin >> p.price;

    // Hash function
    int key = p.code % SIZE;

    // If no collision, insert directly
    if (arr[key].code == -1)
    {
        arr[key] = p;
        cout << "\n--->Product inserted at index " << key << endl;
    }
    else
    {
        // Collision occurred, apply linear probing
        cout << "\nCollision at index " << key
             << ", applying linear probing..." << endl;

        int i = (key + 1) % SIZE;

        // Search for next empty slot
        while (i != key && arr[i].code != -1)
        {
            i = (i + 1) % SIZE;
        }

        // Insert if empty slot is found
        if (arr[i].code == -1)
        {
            arr[i] = p;
            cout << "\n--->Product inserted at index " << i << endl;
        }
        else
        {
            // Hash table is full
            cout << "\n--->Hash table is full. Cannot insert product." << endl;
        }
    }
}

/*
    Deletes a product from the hash table
    using linear probing search.
*/
void del()
{
    int code;
    cout << "\nEnter Product Code to delete: ";
    cin >> code;

    int key = code % SIZE;
    int i = key;
    bool found = false;

    // Search until empty slot or full cycle
    while (arr[i].code != -1)
    {
        if (arr[i].code == code)
        {
            arr[i].code = -1; // Mark slot as empty
            cout << "--->Product with code " << code
                 << " deleted from index " << i << endl;
            found = true;
            break;
        }

        i = (i + 1) % SIZE;

        if (i == key) // Full cycle completed
            break;
    }

    if (!found)
    {
        cout << "--->Product not found in hash table." << endl;
    }
}

/*
    Searches for a product using hash function
    and linear probing.
*/
void search()
{
    int code;
    cout << "\nEnter Product Code to search: ";
    cin >> code;

    int key = code % SIZE;
    int i = key;

    // Traverse until empty slot or full cycle
    while (arr[i].code != -1)
    {
        if (arr[i].code == code)
        {
            cout << "\n--->Product found at index " << i << endl;
            cout << "Code: " << arr[i].code
                 << "\tStock: " << arr[i].stock
                 << "\tPrice: " << arr[i].price << endl;
            return;
        }

        i = (i + 1) % SIZE;

        if (i == key)
            break;
    }

    cout << "--->Product not found." << endl;
}

/*
    Updates stock and price of an existing product.
*/
void update()
{
    int code;
    cout << "\nEnter Product Code to update: ";
    cin >> code;

    int key = code % SIZE;
    int i = key;

    while (arr[i].code != -1)
    {
        if (arr[i].code == code)
        {
            cout << "-->Enter new stock quantity: ";
            cin >> arr[i].stock;
            cout << "-->Enter new price: ";
            cin >> arr[i].price;

            cout << "--->Product details updated successfully." << endl;
            return;
        }

        i = (i + 1) % SIZE;

        if (i == key)
            break;
    }

    cout << "--->Product not found. Cannot update." << endl;
}

/*
    Increases stock of a product.
    Useful in inventory systems.
*/
void restock()
{
    int code, addQty;

    cout << "\nEnter Product Code to restock: ";
    cin >> code;
    cout << "Enter quantity to add: ";
    cin >> addQty;

    int key = code % SIZE;
    int i = key;

    while (arr[i].code != -1)
    {
        if (arr[i].code == code)
        {
            arr[i].stock += addQty;
            cout << "-->Stock updated. New stock: "
                 << arr[i].stock << endl;
            return;
        }

        i = (i + 1) % SIZE;

        if (i == key)
            break;
    }

    cout << "-->Product not found. Cannot restock." << endl;
}

/*
    Displays the complete hash table.
*/
void print()
{
    cout << "\nIndex\tCode\tStock\tPrice\n";
    cout << "-----------------------------------\n";

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i].code != -1)
        {
            cout << i << "\t"
                 << arr[i].code << "\t"
                 << arr[i].stock << "\t"
                 << arr[i].price << "\n";
        }
        else
        {
            // Empty slot
            cout << i << "\t-\t-\t-\n";
        }
    }
}

/*
    Displays menu options to the user.
*/
void menu()
{
    cout << "\n======================> Product Management System <======================\n";
    cout << "1. Insert Product\n";
    cout << "2. Delete Product\n";
    cout << "3. Search Product\n";
    cout << "4. Update Product\n";
    cout << "5. Restock Product\n";
    cout << "6. Display Hash Table\n";
    cout << "7. Exit\n";
    cout << "\nEnter your choice: ";
}

/*
    Main function:
    - Initializes hash table
    - Provides menu-driven interface
*/
int main()
{
    int ch;

    init(); // Initialize hash table

    do
    {
        menu();
        cin >> ch;

        switch (ch)
        {
        case 1:
            insert();
            break;

        case 2:
            del();
            break;

        case 3:
            search();
            break;

        case 4:
            update();
            break;

        case 5:
            restock();
            break;

        case 6:
            print();
            break;

        case 7:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (ch != 7);

    return 0; // End of program
}
