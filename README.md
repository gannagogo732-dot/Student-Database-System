# 🎓 Simple Student Database Management System

A C-based **Student Database Management System** implemented using **Modular Programming** and memory optimization techniques. Designed as a foundational software layer for Embedded Systems applications.

---

## 🛠️ Technologies & Concepts Used
* **Programming Language:** C 
* **Architecture:** Modular Programming (Separation of Concerns: Application vs. Database Logic)
* **Data Types:** Custom Standard Data Types (`uint8`, `uint32`, `bool`) for Memory Optimization
* **Data Structure:** Fixed-Size Arrays, Structures (`struct`), and Array Left-Shifting Logic for Deletion
* **Version Control:** Git & GitHub

---

## 🏗️ Project Architecture
The project follows strict modular programming principles and is structured into 3 distinct layers:

1. **Standard Types Layer (`STD.h`):** Defines cross-platform fixed-width integer types and booleans.
2. **Database Engine Layer (`SDB.h` & `SDB.c`):** Manages memory storage, student record additions, searches, and shifting array elements upon deletion.
3. **Application Control Layer (`SDBAPP.c` & `main.c`):** Handles interactive user terminal menu, super-loop execution, and user choice dispatching.

---

## ✨ Features
* ➕ **Add Student:** Validate ID uniqueness and append to database.
* 📖 **Read Entry:** Search by Student ID and display complete course grades.
* 📋 **Get ID List:** Fetch total active students and array of registered IDs.
* ❌ **Delete Entry:** Memory management via array left-shifting logic (Overwriting elements in static array).
* 🔍 **ID Check & Capacity Guard:** Verify ID existence and handle database full/empty boundary checks.

---

## 💻 How to Run

1. **Clone the repository:**
   ```bash
   git clone [https://github.com/YourUsername/Student-Database-System.git](https://github.com/YourUsername/Student-Database-System.git)
