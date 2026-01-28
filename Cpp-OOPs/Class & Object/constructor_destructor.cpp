/*
📘 SCENARIO: HOTEL BOOKING SYSTEM
---------------------------------
This program demonstrates the concept of:
1️⃣ Default Constructor  
2️⃣ Parameterized Constructor  
3️⃣ Copy Constructor  
4️⃣ Destructor  

Each constructor initializes or copies data members related to a hotel room booking,
such as room number and room price.
*/

#include <iostream>
using namespace std;

class room_book
{
    int r_price;
    int room_no;

public:
    /* 🧹 DESTRUCTOR
       ----------------
       → A destructor is automatically invoked when an object goes out of scope.
       → It is used to free resources or perform clean-up operations.
    */
    ~room_book()
    {
        cout << "\nDestructor called for room no: " << room_no;
    }

    /* 🏨 DEFAULT CONSTRUCTOR
       -------------------------
       → Called automatically when an object is created without arguments.
       → Used to initialize default values.
    */
    room_book()
    {
        r_price = 2200;
        room_no = 0;
        cout << "Your room price is: " << r_price << endl;
    }

    /* 🔢 PARAMETERIZED CONSTRUCTOR
       ------------------------------
       → Called when arguments are passed while creating an object.
       → Helps assign specific values to data members at the time of object creation.
    */
    room_book(int r)
    {
        room_no = r;
        r_price = 2200;
        cout << "Your room no is: " << room_no << endl;
    }

    /* 📋 COPY CONSTRUCTOR
       ---------------------
       → Used to create a new object as a copy of an existing object.
       → Copies data members from one object to another.
    */
    room_book(room_book &newobj)
    {
        room_no = newobj.room_no;
        r_price = newobj.r_price;
        cout << "From new object room_no = " << room_no << ", price = " << r_price << endl;
    }
};

int main()
{
    // 🧱 Default constructor objects
    room_book obj1, obj2;

    // 🏠 Taking user input for room numbers
    int rn1, rn2;
    cout << "Enter room number for obj3: ";
    cin >> rn1;
    room_book obj3(rn1); // Parameterized constructor

    cout << "Enter room number for obj4: ";
    cin >> rn2;
    room_book obj4(rn2); // Parameterized constructor

    // 🧬 Copy constructor example
    room_book new_obj(obj3);

    return 0;
}



/********************OUTPUT**********************/
/*
Your room price is: 2200
Your room price is: 2200
Enter room number for obj3: 1005
Your room no is: 1005
Enter room number for obj4: 2003
Your room no is: 2003
From new object room_no = 1005

Deallocation/Destructor
Deallocation/Destructor
Deallocation/Destructor
Deallocation/Destructor
Deallocation/Destructor
--------------------------------
Process exited after 3.629 seconds with return value 0
Press any key to continue . . .
*/
