# 🎓 Simple Student Database Management System

A dynamic, C-based **Student Database Management System** implemented using **Modular Programming** and memory optimization techniques. Designed as a foundational software layer for Embedded Systems applications.

---

## 🛠️ Technologies & Concepts Used
* **Programming Language:** C (ANSI C)[span_1](start_span)[span_1](end_span)
* **Architecture:** Modular Programming (Separation of Concerns: Application vs. Database Logic)[span_2](start_span)[span_2](end_span)
* **Data Types:** Custom Standard Data Types (`uint8`, `uint32`, `bool`) for Memory Optimization[span_3](start_span)[span_3](end_span)
* **Data Structure:** Structures (`struct`), Fixed Arrays, and Array Left_Shifting for Deletion[span_4](start_span)[span_4](end_span)
* **Version Control:** Git & GitHub

---

## 🏗️ Project Architecture
The project follows strict modular programming principles and is structured into 3 distinct layers[span_5](start_span)[span_5](end_span):

1. **Standard Types Layer (`STD.h`):** Defines cross-platform fixed-width integer types and booleans[span_6](start_span)[span_6](end_span).
2. **Database Engine Layer (`SDB.h` & `SDB.c`):** Manages memory storage, student record additions, searches, and shifting array elements upon deletion[span_7](start_span)[span_7](end_span).
3. **Application Control Layer (`SDBAPP.c` & `main.c`):** Handles interactive user terminal menu, super-loop execution, and user choice dispatching[span_8](start_span)[span_8](end_span).

---

## ✨ Features
* ➕ **Add Student:** Validate ID uniqueness and append to database[span_9](start_span)[span_9](end_span).
* 📖 **Read Entry:** Search by Student ID and display complete course grades[span_10](start_span)[span_10](end_span).
* 📋 **Get ID List:** Fetch total active students and array of registered IDs[span_11](start_span)[span_11](end_span).
* ❌ **Delete Entry:** Logical and physical memory cleanup via array left-shifting logic(overwriting elements in static array)[span_12](start_span)[span_12](end_span).
* 🔍 **ID Check & Capacity Guard:** Verify ID existence and handle database full/empty boundary checks[span_13](start_span)[span_13](end_span).

---

## 💻 How to Run

1. **Clone the repository:**
   ```bash
   git clone [https://github.com/YourUsername/Student-Database-System.git](https://github.com/YourUsername/Student-Database-System.git)