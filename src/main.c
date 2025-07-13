#include <stdio.h>
#include <stdlib.h>
struct Account {
    char name[60];
    int accNumber;
    float balance;
};

// Functions declaration:
void createAccount(struct Account accounts[],int *count); 
void Deposit(struct Account accounts[],int count);
void Withdraw(struct Account accounts[],int count);
void Display(struct Account accounts[],int count);
void FindAcc(struct Account accounts[],int count,int accNUmber);


int main()
{
    struct Account accounts[50];
    int count = 0; // temp var to count acoounts
    int choice;

    while(1)
    {
        printf("\n---Bank Management System---\n");
        printf("1. Add Account \n ");
        printf("2.Deposit Money \n");
        printf("3. Withdraw Money \n");
        printf("4. Display account details \n");
        printf("5. Exit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
            createAccount(accounts, &count);
            break;
            case 2:
            Deposit(accounts,count);
            break;
            case 3:
            Withdraw(accounts, count);
            break;
            case 4:
            Display(accounts, count);
            break;
            case 5:
            printf("Exiting now!\n");
            printf("👏Thank you!");
            break;
            default:
                printf("Wrong choice❌. Pls try again");
            }
    }

        return 0;
}