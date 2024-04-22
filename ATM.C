#include <stdio.h>

void accDash() {
    printf("----------Account Dashboard----------\n\n");
    printf("1| Account Information \t\t 2| Deposit\n");
    printf("3| More Services \t\t 4| Withdrawal\n");
    printf("5| Balance Enquiry \t\t 6| Pin Change\n");
    printf("7| Exit (LogOut)\n");
    printf("--------------------------------------\n");
}

int main() {
    int input, balance = 50, pin = 54123;
    double deposit, withdraw;

    do {
        accDash();
        printf("Input: ");
        scanf("%d", &input);
        fflush(stdin);

        switch (input) {
            case 1:
                printf("Account Name: Mbonisi Mtunzi\n\n");
                break;
            case 2:
                printf("Enter Amount: $");
                scanf("%lf", &deposit);
                balance += deposit;
                printf("\nYou Have Successfully Deposited: $%.2lf\n\n", deposit);
                break;
            case 3:
                printf("This Feature Is Under Construction\n\n");
                break;
            case 4:
                printf("Enter Withdrawal Amount: $");
                scanf("%lf", &withdraw);
                if (withdraw >= balance) {
                    printf("\nINSUFFICIENT FUNDS!! to perform this Transaction\n\n");
                } else {
                    balance -= withdraw;
                    printf("\nYou Have Successfully Withdrawn: $%.2lf\n\n", withdraw);
                }
                break;
            case 5:
                printf("\nYour Balance is: $%.2lf\n", balance);
                printf("Do You Wish To Make A Deposit\n\n");
                break;
            case 6:
                int oldPin;
                printf("\nConfirm Previous Pin: >> ");
                scanf("%d", &oldPin);
                if (oldPin == pin) {
                    printf("Enter New Pin: >> ");
                    scanf("%d", &pin);
                } else {
                    printf("\nINCORRECT PIN - Try Again\n\n");
                }
                printf("\nYou Have Successfully Changed Your Pin\n\n");
                break;
        }
    } while (input != 7);

    return 0;
}
