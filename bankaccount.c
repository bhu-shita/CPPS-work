//classwork question 4, date:5.11.24
#include <stdio.h>
#include <string.h>


struct BankAccount {
    char name[100];
    int accountNumber;
    float balance;
    char accountType; 
    union {
        float interestRate;    
        float overdraftLimit;  
    } accountDetails;
};


void displayAccount(struct BankAccount account) {
    printf("\nAccount Holder: %s\n", account.name);
    printf("Account Number: %d\n", account.accountNumber);
    printf("Balance: %.2f\n", account.balance);
    
    if (account.accountType == 'S') {
        printf("Account Type: Savings\n");
        printf("Interest Rate: %.2f%%\n", account.accountDetails.interestRate);
    } else if (account.accountType == 'C') {
        printf("Account Type: Current\n");
        printf("Overdraft Limit: %.2f\n", account.accountDetails.overdraftLimit);
    } else {
        printf("Unknown account type.\n");
    }
}

int main() {
    struct BankAccount account1, account2;

    
    strcpy(account1.name, "Abhi");
    account1.accountNumber = 1001;
    account1.balance = 50000.00;
    account1.accountType = 'S';
    account1.accountDetails.interestRate = 4.5; 

   
    strcpy(account2.name, "Bishal");
    account2.accountNumber = 1002;
    account2.balance = 20000.00;
    account2.accountType = 'C';
    account2.accountDetails.overdraftLimit = 1000.00;

   
    displayAccount(account1);
    displayAccount(account2);

    return 0;
}
