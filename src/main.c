#include <stdio.h>
#include <stdlib.h>
struct Account {
    char name[60];
    int accNumber;
    float balance;
};

// Functions declaration:
void createAccount(struct Account accounts,int *count); 
void Deposit(struct Account accounts,int count);
void Withdraw(struct Account accounts,int count);
void Display(struct Account accounts,int count);
void FindAcc(struct Account accounts,int count,int accNUmber);


int main()
{
    struct Account accounts[50];
    int count = 0; // temp var to count acoounts
    int choice;
    
    return 0;
}