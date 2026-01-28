/*
💡TITLE: Demonstration of Constructors, Copy Constructor, Parameterized Constructor and Destructor in C++
*/

/*=========================================== THEORY SUMMARY ==============================================

1️⃣ Default Constructor:
   - Called automatically when an object is created without arguments.
   - Initializes members with default values.

2️⃣ Parameterized Constructor:
   - Used to assign custom values during object creation.

3️⃣ Copy Constructor:
   - Creates a new object as a copy of an existing object.

4️⃣ Destructor:
   - Called automatically when an object is destroyed.
   - Used to release memory or clean up resources.

5️⃣ get() & display() Functions:
   - get(): Accepts input for data members.
   - display(): Displays object details.

======================================================================================================*/



#include <iostream>
using namespace std;

class Candidate
{
    string name;
    float exp;
    int age;

public:
    // Default Constructor
    Candidate()
    {
        cout << "\n[Default Constructor Called]";
        name = "Aryan Sharma";
        exp = 5;
        age = 26;
    }

    // Parameterized Constructor
    Candidate(string n, int a, float e)
    {
        cout << "\n[Parameterized Constructor Called]";
        name = n;
        age = a;
        exp = e;
    }

    // Copy Constructor
    Candidate(const Candidate &c)
    {
        cout << "\n[Copy Constructor Called]";
        name = c.name;
        age = c.age;
        exp = c.exp;
    }

    // Input Function
    void get()
    {
        cout << "\nEnter your name: ";
        cin >> name;

        cout << "Enter your age: ";
        cin >> age;

        cout << "Enter your experience (in years): ";
        cin >> exp;
    }

    // Display Function
    void display()
    {
        cout << "\n--- Candidate Details ---";
        cout << "\nName of candidate: " << name;
        cout << "\nAge of candidate: " << age;
        cout << "\nIndustrial experience: " << exp << " years\n";
    }

    // Destructor
    ~Candidate()
    {
        cout << "\n[Destructor Called for " << name << "]\n";
    }
};


// Main Function
int main()
{
    // Default Constructor
    Candidate c1;

    // Parameterized Constructor
    Candidate c2("Aarav", 25, 2.5);

    // Copy Constructor
    Candidate c3(c2);


    cout << "\n\n--- Displaying Details ---";
    cout << "\n\nCandidate 1 (Default):";
    c1.display();

    cout << "\nCandidate 2 (Parameterized):";
    c2.display();

    cout << "\nCandidate 3 (Copied from Candidate 2):";
    c3.display();

    cout << "\nProgram ending... destructors will now be called automatically.\n";

    return 0;
}


/********** SAMPLE OUTPUT **********
[Default Constructor Called]
[Parameterized Constructor Called]
[Copy Constructor Called]

--- Displaying Details ---

Candidate 1 (Default):
--- Candidate Details ---
Name of candidate: Aryan Sharma
Age of candidate: 26
Industrial experience: 5 years

Candidate 2 (Parameterized):
--- Candidate Details ---
Name of candidate: Aarav
Age of candidate: 25
Industrial experience: 2.5 years

Candidate 3 (Copied from Candidate 2):
--- Candidate Details ---
Name of candidate: Aarav
Age of candidate: 25
Industrial experience: 2.5 years

Program ending... destructors will now be called automatically.

[Destructor Called for Aarav]
[Destructor Called for Aarav]
[Destructor Called for Aryan Sharma]
****************************************/