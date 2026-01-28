/*
    Topic:- Multilevel Inheritance in C++ (Human -> Employee -> Manager Example)
    Deployed & Maintained by:- Om Channawar
    Date:- Nov 2025

    Definition:
    -----------
    Multilevel Inheritance is a type of inheritance where a class is derived
    from another derived class, forming a multilevel chain (grandparent -> parent -> child).

    Example Concept:
    Human (Base Class) -> Employee (Intermediate Class) -> Manager (Derived Class)

    Applications:
    -------------
    1. Used in company hierarchy (Human -> Employee -> Manager)
    2. Vehicle classification (Vehicle -> Car -> SportsCar)
    3. Education systems (Person -> Student -> Graduate)
    4. Digital systems (Device -> Computer -> GamingPC)

    Advantages:
    -----------
    1. Models real-world hierarchical relationships
    2. Promotes modular and structured development
    3. Encourages step-by-step code reusability
    4. Easy to extend and maintain

    Disadvantages:
    --------------
    1. Can increase code complexity
    2. Any change in base class affects all derived classes
    3. Tight coupling between class levels
    4. Difficult to debug in long inheritance chains
*/

#include <iostream>
using namespace std;

// Base Class
class Human
{
public:
    void breathe()
    {
        cout << "Human breathes to live." << endl;
    }
};

// Intermediate Derived Class
class Employee : public Human
{
public:
    void work()
    {
        cout << "Employee works in an organization." << endl;
    }
};

// Further Derived Class (Multilevel Inheritance)
class Manager : public Employee
{
public:
    void manage()
    {
        cout << "Manager manages the team efficiently." << endl;
    }
};

int main()
{
    Manager m;
    m.breathe(); // From Human class
    m.work();    // From Employee class
    m.manage();  // From Manager class
    return 0;
}
