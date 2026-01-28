/*
    Topic:- Single Inheritance in C++ (Vehicle - Truck Example)
    Deployed & Maintained by:- Om Channawar
    Date:- Nov 2025

    Definition:
    -----------
    Single Inheritance is a type of inheritance in which a class (Derived class)
    inherits from only one base (Parent) class. It establishes a simple parent-child
    relationship and promotes code reusability.

    Example Concept:
    Vehicle (Base Class) -> Truck (Derived Class)

    Applications:
    -------------
    1. Used in vehicle management systems (Vehicle -> Car, Truck, Bike)
    2. Used in transport tracking systems (Vehicle -> Truck, Bus, Van)
    3. Helps in modeling real-world hierarchical relationships
    4. Useful in designing modular and reusable software components

    Advantages:
    -----------
    1. Code reusability from a single parent class
    2. Easy to understand and implement
    3. Reduces redundancy and improves maintainability
    4. Enhances readability and structure of code

    Disadvantages:
    --------------
    1. Limited to only one parent class
    2. Not suitable for complex real-world scenarios
    3. Tight coupling between child and parent classes
    4. Child class completely depends on parent class design
*/

#include <iostream>
using namespace std;

// Base Class
class Vehicle
{
public:
    void vehicleDetails()
    {
        cout << "This is a Vehicle used for transportation." << endl;
    }
};

// Derived Class (Single Inheritance)
class Truck : public Vehicle
{
public:
    void truckDetails()
    {
        cout << "This is a Truck used to transport heavy goods." << endl;
    }
};

int main()
{
    Truck t;
    t.vehicleDetails(); // Inherited from Vehicle class
    t.truckDetails();   // Defined in Truck class
    return 0;
}