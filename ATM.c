/*
Tuyen Pham
TUID 915591991
09/13/2018
CIS 2107 - Section 3
Lab 2
This lab is to write a C Program for an ATM machine by implementing functions.
 */

#include <stdio.h>
#include <stdlib.h>

int deposit();
int withdraw();
void checkBalance();
void quit();

int balance = 5000;
int withDrawAmount = 0;
int depositAmount = 0;

int main() {
    
    int pin;
    int pinTries = 1;
    int receipt;
    int options;
    int options2;
    int transaction = 1;


    printf("Welcome to ATM Service!\n");
    printf("Enter your pin number: ");
    scanf("%d", &pin);
    while (pinTries < 3) {
        if (pin == 3014) {
            printf("Choose from the following:\n");
            printf("1. Balance\n2. Cash Withdraw\n3. Cash Deposit\n4. Quit\n");
            scanf("%d", &options);

            while (options <= 4) {
                switch (options) {
                    case 1:
                        checkBalance();
                        break;

                    case 2:
                        withdraw();
                        break;

                    case 3:
                        deposit();
                        break;

                    case 4:
                        printf("Would you like a receipt?(1 is yes and 2 is no): ");
                        scanf("%d", &receipt);
                        printf("The number of transactions is: %d\n", transaction);
                        printf("Thank you for using this ATM.GoodBye!\n");
                        options2 = 2;
                        return 0;
                        break;


                }
                printf("Would you like another transaction(1 is yes and 2 is no): "); // 1 is equal to yes and 2 is equal to no
                scanf("%d", &options2);
                if (options2 == 1) {
                    transaction++;
                    printf("1. Balance\n2. Cash Withdraw\n3. Cash Deposit\n4. Quit\n");
                    scanf("%d", &options);


                } else {
                    options = 4;
                    pinTries = 4;
                    printf("Would you like a receipt?(1 is yes and 2 is no): ");
                    //1 is equal to yes and 2 is equal to no
                    scanf("%d", &receipt);
                    printf("The number of transactions is: %d\n", transaction);
                    printf("Thank you for using this ATM.GoodBye!\n");
                    break;
                }
            }
        }
        else if (pin != 3014) {
            printf("Invalid pin, please try again:");
            scanf("%d", &pin);
            pinTries++;
        }

        if (pinTries == 3) {
            printf("Sorry, you cant continue, please contact your bank");
        }
    }
    return 0;
}

void checkBalance() {
    int balance = 5000;
    printf("Your current balance is: %d\n", balance);
    return balance;
}

int withdraw() {
    int actamount=0;
    printf("Enter the amount you would like to withdraw: ");
    scanf("%d", &actamount);
    withDrawAmount=withDrawAmount+actamount;
    printf("The amount of withdraw is %d\n",withDrawAmount);
    if (withDrawAmount <= 1000 && withDrawAmount % 20 == 0) {
        balance -= actamount;
        printf("Please collect your cash\n");
    } else {
        withDrawAmount=withDrawAmount-actamount;
        printf("Your transaction is refused\n");
    }
    printf("The final balance is: %d\n", balance);
    return balance;
    }

int deposit() {
    int amount = 0;
    printf("Enter an amount you would like to deposit: ");
    scanf("%d", &amount);
    depositAmount=depositAmount+amount;
    printf("The amount of deposit is %d\n",depositAmount);
    if (depositAmount <= 10000) {
        balance += amount;
    } else {
        depositAmount=depositAmount+amount;
        printf("Your transaction is refused\n");
    }
    printf("The final balance is: %d\n", balance);
    return balance;
}





