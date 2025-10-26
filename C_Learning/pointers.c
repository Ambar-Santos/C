#include <stdio.h>

void printAge(int *pAge){

    printf("You are %d years old\n", * pAge);

}



int main(){
  int age = 21;
  int * pAge = NULL; 

  //This stores the adress of age 
  pAge = &age;
 
  printAge(pAge);


    getchar();
    return 0;
}