

# 📚 Simple Bank Management System

A simple command-line Bank Management System built in **C language**.
This project helps you understand basic C programming concepts like **structures**, **arrays**, **functions**, and **menu-driven programs**.

---

## 🚀 Features

*  **Create a New Account**

  * Add a customer’s name, account number, and opening balance.
*  **Deposit Money**

  * Add money to an existing account.
*  **Withdraw Money**

  * Withdraw money with a balance check to prevent overdrafts.
*  **Display Account Details**

  * View account holder’s name, account number, and current balance.
* **Deletion or Close an account**
---

## 🔧 How It Works

The program uses:

* `struct` to store each account’s **Name**, **Account Number**, and **Balance**.
* An **array of structures** to store multiple accounts.
* Functions to perform **create**, **deposit**, **withdraw**, and **display** operations.
* A **menu-driven loop** with `switch-case` to interact with the user.

---

## ✅ Concepts You’ll Learn

* How to **define structures** in C
* How to **store multiple records** using arrays of structures
* How to **create reusable functions**
* How to **search records**
* How to build **simple text-based menus**
* How to **validate user input**

---

## 📌 Example Account Structure

```c
struct Account {
    char name[50];
    int accNumber;
    float balance;
};
```

---

## 📣 Author (Soumya Garg)

This project is created as a **learning exercise** to strengthen your grasp of C programming fundamentals.

---

## 🏆 Tips

* Always **check for sufficient balance** before withdrawals.
* Make sure **account numbers are unique** to avoid conflicts.
* Extend it by saving data to a **file** for extra practice!

---

## 🔗 License
This project is listed under MIT license(by Github)
