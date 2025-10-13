//Bro code C course

#include <stdio.h>
#include <string.h>

int main(){

    //SHOPPING CART PROGRAM 
    
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0; 
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?: \n");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\n';


    printf("What is the price for each?: \n");
    scanf("%f", &price);

    printf("How many would you like?: \n");
    scanf("%d", &quantity);
   
    total = price * quantity; 

    printf("You have bought %d %s/s\n", quantity, item);
    printf("The total is: ");
    printf("%c%.2f",currency, total);

    return 0;
}