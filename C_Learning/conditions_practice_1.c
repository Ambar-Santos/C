/* In this exercise, you must construct an
if statement inside the guessNumber function 
statement that checks if the number guess is 
equal to 555. If that is the case, the function
must print out using printf "Correct. You guessed it!".
If guess is less than 555, the function must print out
using printf "Your guess is too low." If guess is greater
than 555, the function must print out using printf 
"Your guess is too high."*/

//Ambar Santos
//October 15th 2025

#include <stdio.h>

int main() {
   
   int number = 0;
   
   printf("Type a whole number\n");
   scanf("%d", &number);
   
   if(number == 555){
     printf("You guessed it!\n"); 
   }else if (number < 555){
     printf("Your guess is too low \n");
   }else{
       printf("Your guess is too high \n");
   }
   
   
   getchar();
    return 0;
}