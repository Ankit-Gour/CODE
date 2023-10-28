#include <stdio.h>

void deposite(int *balance)
{
    int previous_amount = *(balance);
    int amount; // new amount to be added
    printf("\nEnter The Amount To Be Deposited:");
    scanf("%d", &amount);
    *(balance) += amount;
    printf("Previous Balance:%d Rs\n", previous_amount);
    printf("Current Balance:%d Rs\n\n\n", *(balance));
}
void withdraw(int *balance)
{

    int previous_amount = *(balance);
    int amount; // new amount to be subtracted
    printf("\nEnter The Amount To Be Withdrawn:");
    scanf("%d", &amount);
    if (amount <= 0)
    {
        printf("Invalid Amount\n");
    }
    else if (amount > (*(balance)))
    {
        printf("You Have Insufficient Balance\n");
    }
    else
    {
        *(balance) -= amount;
    }
    printf("Previous Balance:%d Rs\n", previous_amount);
    printf("Current Balance:%d Rs\n\n\n", *(balance));
}
void check_balance(int *balance)
{
    printf("Your Current Balance is %d Rs\n", *(balance));
}

int main()
{

    int balance = 0;
    int User_choice = 0;
    printf("\nWelcome to City Union Bank\n");

    while (User_choice != 4)
    {
        printf("1.Deposite\n2.Withdraw\n3.Check Balance\n4.Exit\nEnter Your Choice:");
        scanf("%d", &User_choice);

        if (User_choice == 1)
        {
            deposite(&balance);
        }
        else if (User_choice == 2)
        {
            withdraw(&balance);
        }
        else if (User_choice == 3)
        {
            check_balance(&balance);
        }
        else if (User_choice == 4)
        {
            goto exit;
        }
        else
        {
            printf("Invalid choice. Please enter a valid option (1-4).\n");
        }
    }
exit:
    printf("\nThankyou For Using Services");
    return 0;
}
