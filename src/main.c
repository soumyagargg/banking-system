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
int FindAcc(struct Account accounts[],int count,int accNUmber);


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
            printf("👏Thank you!\n");
            break;
            default:
            printf("Wrong choice❌. Pls try again\n");
            }



    }

        return 0;
}

void createAccount(struct Account accounts[],int *count) 
{
    if (*count >= 50)
    {
        printf("Account's limit has reached!");
        return;

    }
    else
    {
        printf("what is your name : \n");
        scanf(" %[^\n]", accounts[*count].name);

        printf("Enter your accout number : \n");
        scanf("%d", &accounts[*count].accNumber);

        // checking for duplication of acc number
        for (int i = 0; i < *count; i++)
        {
            if (accounts[i].accNumber == accounts[*count].accNumber)
            {
                printf("Entered account number already exists!");

            }
        }
        printf("enter the initial balance : \n");
        scanf("%f", &accounts[*count].balance);

        printf("Congrats! \n");
        printf("Account created successfully \n");
        (*count)++;
    }
}

void Deposit(struct Account accounts[],int count)
{
    int accNumber;
    float amount;

    printf("enter account number : \n");
    scanf("%d", &accNumber);
    int Index = FindAcc(accounts,count,accNumber);

    if (Index == -1)
    {
        printf("Account not found! \n");
        return;

    }

    printf("Enter amount to deposit : \n");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("invalid amound.\n");
        return;

    }
    accounts[Index].balance += amount;
    printf("Amount deposited successfully.\n");
}


void Withdraw(struct Account accounts[],int count)
{
    int accNumber;
    float amount;
    printf("enter account number : \n");
    scanf("%d", &accNumber);
    
    int Index = FindAcc(accounts,count,accNumber);

    if (Index == -1)
    {
        printf("Account not found! \n");
        return;

    }

    printf("Enter amount to withdraw : \n");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("invalid amount! \n");
        return;

    }

    if ( accounts[Index].balance >= amount )
    {
        accounts[Index].balance -= amount;
        printf("Withdrwalal successfull! \n");
        printf("New balance : %.2f\n", accounts[Index].balance);

    }
    else
    {
        printf("Insufficient balance! \n");

    }
    
}
