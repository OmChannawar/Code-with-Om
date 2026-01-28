/*
    Topic:- Multiple Inheritance in C++ (Teacher, Coach -> Student Example)
    Deployed & Maintained by:- Om Channawar
    Date:- Nov 2025

    Definition:
    -----------
    Multiple Inheritance is a type of inheritance in which a class (Derived class)
    inherits from more than one base (Parent) class. This allows the derived class
    to acquire properties and behaviors from multiple sources.

    Example Concept:
    Teacher (Base Class 1) + Coach (Base Class 2) -> Student (Derived Class)

    Applications:
    -------------
    1. Used in real-world role-based systems (Student learns from Teacher & Coach)
    2. Employee hierarchies (Developer + Manager -> Tech Lead)
    3. Smart devices (Camera + Phone -> Smartphone)
    4. Game characters with multiple abilities

    Advantages:
    -----------
    1. Promotes high-level code reusability
    2. Models multiple role relationships
    3. Combines features of multiple classes
    4. Reduces redundant code

    Disadvantages:
    --------------
    1. Can create ambiguity (Diamond Problem)
    2. Increases code complexity
    3. Difficult to maintain and troubleshoot
    4. Tight coupling between multiple classes
*/

#include <iostream>
using namespace std;

// Base Class 1
class Teacher
{
public:
    void teach()
    {
        cout << "Teaching academic subjects." << endl;
    }
};

// Base Class 2
class Coach
{
public:
    void train()
    {
        cout << "Training in sports and fitness." << endl;
    }
};

// Derived Class (Multiple Inheritance)
class Student : public Teacher, public Coach
{
public:
    void study()
    {
        cout << "Student studies hard to achieve success." << endl;
    }
};

int main()
{
    Student s;
    s.teach(); // From Teacher class
    s.train(); // From Coach class
    s.study(); // From Student class
    return 0;
}
