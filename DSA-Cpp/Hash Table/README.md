# 🔐 Hashing in Data Structures (C++)

## 📌 Introduction

Hashing is a fundamental data structure technique used to store, retrieve, insert, and delete data efficiently.
It works by converting a given **key** into an **index** of an array using a **hash function**.
The data is stored in a structure known as a **hash table**.

Hashing is widely used because it provides very fast access to data, especially when dealing with large datasets.

---

## 📖 What is Hashing?

Hashing is the process of mapping a key to a fixed-size table using a hash function.

- A **key** uniquely identifies data
- A **hash function** converts the key into an index
- Data is stored at that index in the hash table
- Average time complexity is **O(1)**

### Representation

```

Key → Hash Function → Index → Hash Table

```

---

## 🔑 Hash Table

A **hash table** is a data structure that stores data in an array format.

- Each index is called a **bucket**
- Data is accessed using keys instead of positions
- Faster than linear data structures like arrays and linked lists

**Real-Life Example:**  
A library system where a book ID directly tells which shelf the book is on.

---

## ⚙️ Hash Function

A **hash function** maps a key to an index in the hash table.

### Example (C++)

```cpp
index = key % table_size;
```

### Properties of a Good Hash Function

- Fast to compute
- Uniform distribution of keys
- Minimizes collisions
- Deterministic (same key → same index)

**Real-Life Example:**
Using the last few digits of a roll number to assign exam hall seats.

---

## 💥 Collision in Hashing

A **collision** occurs when two different keys produce the same hash index.

### Example

```
105 % 10 = 5
115 % 10 = 5
```

**Real-Life Example:**
Two cars being assigned the same parking slot number.

---

## 🔁 Types of Hashing / Collision Resolution Techniques

### 1️⃣ Linear Probing

If a collision occurs, the next available slot is checked sequentially.

**Formula**

```cpp
(index + i) % table_size
```

**Advantages**

- Simple to implement

**Disadvantages**

- Causes clustering

**Real-Life Example**
If seat 10 is occupied, check seat 11, then 12, and so on.

---

### 2️⃣ Quadratic Probing

Uses square increments to find the next available slot.

**Formula**

```cpp
(index + i²) % table_size
```

**Advantages**

- Reduces clustering compared to linear probing

**Disadvantages**

- Slightly complex
- May fail even if space exists

**Real-Life Example**
Students seated with increasing gaps to avoid crowding.

---

### 3️⃣ Double Hashing

Uses two hash functions.
The second hash function decides the jump size.

**Advantages**

- Best collision handling among open addressing methods

**Disadvantages**

- More computation required

**Real-Life Example**
Using an alternate route when the main road is blocked.

---

### 4️⃣ Chaining

Each index of the hash table stores a linked list.

**Advantages**

- Handles many collisions
- No overflow problem

**Disadvantages**

- Extra memory required

**Real-Life Example**
Multiple students listed under the same roll number category.

---

## 🔧 Operations in Hashing

| Operation | Description           |
| --------- | --------------------- |
| Insert    | Add data using a key  |
| Search    | Find data using a key |
| Delete    | Remove data           |
| Update    | Modify existing data  |

---

## ⏱ Time Complexity

| Operation | Average Case | Worst Case |
| --------- | ------------ | ---------- |
| Insert    | O(1)         | O(n)       |
| Search    | O(1)         | O(n)       |
| Delete    | O(1)         | O(n)       |

Worst case occurs when many collisions happen.

---

## ✅ Advantages of Hashing (with Real-Life Examples)

### Fast Data Access

Direct access without sequential searching.
**Example:** Searching a contact using a phone number.

### Efficient for Large Data

Works well with large datasets.
**Example:** Online shopping product databases.

### Optimized Performance

Most operations run in constant time.
**Example:** ATM card number verification.

### Simple Data Retrieval

No need to traverse entire data structure.
**Example:** Student roll number lookup system.

---

## ❌ Disadvantages of Hashing (with Real-Life Examples)

### Collisions

Different keys may map to the same index.
**Example:** Two vehicles assigned the same parking slot.

### Clustering

Occurs in open addressing methods.
**Example:** Cars crowded in one parking section.

### Fixed Size Limitation

Hash table size must be predefined.
**Example:** Limited storage capacity in a warehouse.

### Poor Hash Function

Leads to performance degradation.
**Example:** Using only last digit of phone numbers for indexing.

---

## 🧠 Applications of Hashing

- Database indexing
- Inventory management systems
- Password storage (hashed passwords)
- Compiler symbol tables
- File systems
- Caching (DNS, browser cache)
- Search engines
- Network routing
- Blockchain technology

---

## 🧾 Hashing in C++

Hashing in C++ can be implemented in two ways:

### 1. Manual Implementation

- Arrays
- Custom hash functions
- Linear probing, quadratic probing, or chaining

### 2. Using STL

- `unordered_map`
- `unordered_set`

These STL containers internally use hashing for fast access.

---

## 🧾 Conclusion

Hashing is one of the most efficient data structure techniques for fast data storage and retrieval.
With a good hash function and proper collision resolution, hashing provides excellent performance
and is widely used in real-world applications.

---

## 📚 References

- Data Structures and Algorithms textbooks
- C++ STL documentation
- Academic computer science resources

```

```
