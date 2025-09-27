#include <stdio.h>

int main(){

    //Shopping cart program

    char item[50];
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you want to buy?: ");
    fgets(item, sizeof(item), stdin);

    printf("What is the price of each? ");
    scanf("%f", &price);
    
    printf("How many would you like? ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("Your total price is: %c%.2f",currency, total);

    return 0;
}