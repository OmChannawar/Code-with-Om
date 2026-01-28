# 🧬 Inheritance in Object-Oriented Programming (OOP)

## What is Inheritance?

Inheritance is a fundamental concept in Object-Oriented Programming (OOP) that facilitates **code reusability** and establishes a **"is-a" relationship** between classes.

- It allows one class (the **Child** or **Derived** class) to inherit the features (fields, methods, and functions) of another class (the **Parent** or **Base** class).
- In essence, you are creating new classes based on existing ones, enabling the derived class to reuse the pre-written code of the base class.

### Example

Consider an `Animal` class as the **Base Class**. `Dog`, `Cat`, and `Cow` classes are **Derived Classes** that extend (`inherit from`) the `Animal` class. A `Dog` _is an_ `Animal`.

---

## 💻 Syntax (C++ Example)

The general syntax for defining a class that inherits from another is as follows:

```cpp
class ChildClass : public ParentClass
{
    // Additional fields and methods specific to the ChildClass
};
```

---

## 🔒 Access Specifiers in Inheritance

Access specifiers (`private`, `protected`, and `public`) determine the **visibility** and **accessibility of a class's members** (fields and methods).

When a child class inherits from a parent class, the **inheritance type** (`public`, `protected`, or `private`) affects how the parent’s members are treated inside the child class.

---

### 📌 Key Rules

1️⃣ **private Members**  
- Not accessible directly in the child class, regardless of inheritance type.  
- Can only be accessed through public/protected methods of the parent class.

2️⃣ **protected Members**  
- Accessible within the parent class and any child class derived from it.  
- Not accessible outside the class hierarchy.

3️⃣ **public Members**  
- Accessible from anywhere in the program.

---

### 📊 Visibility Transformation

| Parent Class Member | Public Inheritance (`class C : public P`) | Protected Inheritance (`class C : protected P`) | Private Inheritance (`class C : private P`) |
|---------------------|-------------------------------------------|-----------------------------------------------|---------------------------------------------|
| **public**          | public                                    | protected                                     | private                                     |
| **protected**       | protected                                 | protected                                     | private                                     |
| **private**         | inaccessible                              | inaccessible                                  | inaccessible                                |

---

### 🔍 Explanation of Inheritance Types

#### 1️⃣ Public Inheritance
- The most common form.
- Maintains a true **"is-a"** relationship.
- Public members of the parent remain public in the child.
- Inherited members stay accessible from outside (if originally public).

#### 2️⃣ Protected Inheritance
- Public and protected members of the parent become **protected** in the child.
- Accessible in the child and its subclasses, but **not from outside code**.
- Still represents an "is-a" relationship but more restricted.

#### 3️⃣ Private Inheritance
- Public and protected members of the parent become **private** in the child.
- No further derived classes can access them.
- Used to model **"is-implemented-in-terms-of"**, not a pure "is-a" relationship.

---

## Types of inheritance:-

1. [Single Inheritance](./Single/)
2. [Multiple Inheritance](./Multiple/)
3. [Multilevel Inheritance](./Multilevel/)
4. [Hierarchical Inheritance](./Hierarchical/)
5. [Hybrid Inheritance](./Hybrid/)

---
