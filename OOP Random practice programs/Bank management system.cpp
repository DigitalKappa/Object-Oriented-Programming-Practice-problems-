#include <stdio.h>
#include <string.h> // To use strcpy and strlen

#define MAX_ACCOUNTS 5 // maximum number of accounts allowed

// Structure to store account details
struct Account {
    int accountNumber;
    char name[50];
    float balance;
};

void createAccount(struct Account accounts[], int *accountCount);
void deposit(struct Account accounts[], int accountCount);
void withdraw(struct Account accounts[], int accountCount);
void viewAccountDetails(struct Account accounts[], int accountCount);
void viewAllAccounts(struct Account accounts[], int accountCount);

int main() {
    struct Account accounts[MAX_ACCOUNTS];  // Array of accounts
    int accountCount = 0;  // Track number of accounts created
    int choice;

    while (1) {
        // Menu options
        printf("\nBank Management System\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. View Account Details\n");
        printf("5. View All Accounts\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (accountCount < MAX_ACCOUNTS) {
                    createAccount(accounts, &accountCount);
                } else {
                    printf("Account limit reached! Cannot create more accounts.\n");
                }
                break;
            case 2:
                if (accountCount > 0) {
                    deposit(accounts, accountCount);
                } else {
                    printf("No accounts available to deposit.\n");
                }
                break;
            case 3:
                if (accountCount > 0) {
                    withdraw(accounts, accountCount);
                } else {
                    printf("No accounts available to withdraw.\n");
                }
                break;
            case 4:
                if (accountCount > 0) {
                    viewAccountDetails(accounts, accountCount);
                } else {
                    printf("No accounts available.\n");
                }
                break;
            case 5:
                if (accountCount > 0) {
                    viewAllAccounts(accounts, accountCount);
                } else {
                    printf("No accounts available.\n");
                }
                break;
            case 6:
                printf("Exiting the system.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

void createAccount(struct Account accounts[], int *accountCount) {
    struct Account newAccount;

    printf("Enter Account Number: ");
    scanf("%d", &newAccount.accountNumber);

    printf("Enter Name: ");
    getchar();  // To consume the newline character left by previous input
    fgets(newAccount.name, 50, stdin);
    newAccount.name[strcspn(newAccount.name, "\n")] = '\0';  // Remove trailing newline

    printf("Enter Initial Balance: ");
    scanf("%f", &newAccount.balance);

    accounts[*accountCount] = newAccount;  // Add new account to the array
    (*accountCount)++;  // Increment account count

    printf("Account created successfully!\n");
}

void deposit(struct Account accounts[], int accountCount) {
    int accNum;
    float amount;
    int i;

    printf("Enter Account Number to Deposit: ");
    scanf("%d", &accNum);

    // Find account
    for (i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accNum) {
            printf("Enter Amount to Deposit: ");
            scanf("%f", &amount);
            if (amount > 0) {
                accounts[i].balance += amount;
                printf("Deposited successfully. New balance: %.2f\n", accounts[i].balance);
            } else {
                printf("Invalid deposit amount.\n");
            }
            return;
        }
    }
    printf("Account not found!\n");
}

void withdraw(struct Account accounts[], int accountCount) {
    int accNum;
    float amount;
    int i;

    printf("Enter Account Number to Withdraw: ");
    scanf("%d", &accNum);

    // Find account
    for (i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accNum) {
            printf("Enter Amount to Withdraw: ");
            scanf("%f", &amount);

            if (amount > 0 && amount <= accounts[i].balance) {
                accounts[i].balance -= amount;
                printf("Withdrawn successfully. New balance: %.2f\n", accounts[i].balance);
            } else {
                printf("Invalid withdraw amount or insufficient funds.\n");
            }
            return;
        }
    }
    printf("Account not found!\n");
}

void viewAccountDetails(struct Account accounts[], int accountCount) {
    int accNum;
    int i;

    printf("Enter Account Number to View: ");
    scanf("%d", &accNum);

    // Find account
    for (i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accNum) {
            printf("\nAccount Details:\n");
            printf("Account Number: %d\n", accounts[i].accountNumber);
            printf("Account Holder: %s\n", accounts[i].name);
            printf("Balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account not found!\n");
}

void viewAllAccounts(struct Account accounts[], int accountCount) {
    if (accountCount == 0) {
        printf("No accounts to display.\n");
    } else {
        printf("\nAll Account Details:\n");
        for (int i = 0; i < accountCount; i++) {
            printf("\nAccount Number: %d\n", accounts[i].accountNumber);
            printf("Account Holder: %s\n", accounts[i].name);
            printf("Balance: %.2f\n", accounts[i].balance);
        }
    }
}
