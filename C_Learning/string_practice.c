//String lesson learn-c org
//Ambar Santos 
//October 16th 2025


#include <stdio.h>
#include <string.h>

int main(){


    char name[100] = "";
    

    printf("Type your name: \n");
    scanf("%99s", name);
   
  

    printf("So, your name is %s, it actually has %zu letters!\n", name, strlen(name));


    getchar();

    return 0;
}