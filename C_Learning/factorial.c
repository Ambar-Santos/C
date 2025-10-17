//For loops
/*Calculate the factorial (multiplication of all items array[0] to array[9],
 inclusive), of the variable array. */



#include <stdio.h>

//function to calculate factorial
int calculate_factorial(int array[], int n){
  
    int factorial = 1; 
  

    for(int i = 0; i < n; i++){
        factorial *= array[i];
        
    }

   return factorial;
}

int main(){
   int array [10] = {1, 2, 3 , 4, 5, 6, 7, 8 , 9, 10};

   printf( "%d! is %d.", array[9] , calculate_factorial(array, sizeof(array)/ sizeof(array[0])));

}