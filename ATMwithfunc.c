#include <stdio.h>


void withdrawal(int *balance, int correct_pin) 
{
    int pin, amount;
    
    printf(" Please enter your 4-digit pin: ");
    scanf("%d", &pin);

    if (pin == correct_pin) {
        printf(" Enter the amount to withdraw: ");
        scanf("%d", &amount);

        if (amount > *balance) {
            printf(" Insufficient balance!\n");
        } else {
            *balance -= amount;
            printf(" Please collect the money.\n");
            printf(" Now, your bank balance is: %d\n", *balance);
        }
    } else {
        printf(" Incorrect pin. Your request has been blocked.\n");
    }
}


void check_balance(int balance, int correct_pin) 
{
    int pin;
    printf("Please enter your 4-digit pin: ");
    scanf("%d", &pin);

    if (pin == correct_pin) {
        printf("\nYour bank balance is: %d\n", balance);
    } else {
        printf(" Incorrect pin. Your request has been blocked.\n");
    }
}

void change_pin(int *correct_pin) 
{
    int current_pin, new_pin;
    printf("Please enter your current 4-digit pin: ");
    scanf("%d", &current_pin);

    if (current_pin == *correct_pin) {
        printf("Enter your new 4-digit pin: ");
        scanf("%d", &new_pin);
        *correct_pin = new_pin;
        printf("Your PIN has been successfully changed.\n");
        
    } else {
        printf("Incorrect current pin. Your request has been blocked.\n");
    }
}

int main() 
{
    int card, n, balance;
    int pin_shubham = 2024, pin_vikas = 7019, pin_viraj = 159753, pin_mayur = 125790;
do{

    printf("\n  Welcome To The ATM\n\n");
    printf(" Please Insert Your Card: ");
    scanf("%d", &card);

    if (card == 2602) 
	{
        balance = 20000;
        printf("\n  Hello Shubham Phunde\n\n");
    } else if (card == 7072) {
        balance = 50000;
        printf("  \n  Hello Vikas Hiwale\n\n");
    } else if (card == 4645) {
        balance = 100000;
        printf("  \n  Hello Viraj Sonawane\n\n");
    } else if (card == 1010) {
        balance = 70000;
        printf("  \n  Hello Mayur Swami\n\n");
    } else {
        printf("  \n  Invalid card.\n");
        return 1;
    }
    
	

    printf("\n> Press 1 to withdraw money from your account\n");
    printf("> Press 2 to check the balance\n");
    printf("> Press 3 to change your PIN\n");
    printf("> Press 0 to exit\n");
    
    scanf("%d", &n);


    if (n == 1) 
	{
        if (card == 2602) withdrawal(&balance, pin_shubham);
        
        else if (card == 7072) withdrawal(&balance, pin_vikas);
        else if (card == 4645) withdrawal(&balance, pin_viraj);
        else if (card == 1010) withdrawal(&balance, pin_mayur);
    } else if (n == 2) {
        if (card == 2602) check_balance(balance, pin_shubham);
        else if (card == 7072) check_balance(balance, pin_vikas);
        else if (card == 4645) check_balance(balance, pin_viraj);
        else if (card == 1010) check_balance(balance, pin_mayur);
    } else if(n == 3){
    	
    	if (card == 2602) change_pin(&pin_shubham);
            else if (card == 7072) change_pin(&pin_vikas);
            else if (card == 4645) change_pin(&pin_viraj);
            else if (card == 1010) change_pin(&pin_mayur);
    	
	}else if (n == 0) {
            printf("\nThank you for using the ATM. Goodbye!\n");
        } else {
            printf("Invalid option ! , please try again...\n");
        }
        
}while(n!=0);
    return 0;
}
