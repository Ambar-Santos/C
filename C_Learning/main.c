#include <stdio.h>

void doSomethingWithOperators()
{
   int x = 2, y = 5;

int z = x + y;
int num = 8 + z;
x -= y;

x = 0;
x = !x;



   printf("Result is %d \n", x);
}


int main(int argc, const char * argv[])
{
    doSomethingWithOperators();
    printf("Im the best \n");
    getchar(); //Waits for user to hit enter before quitting

    return 0; 
} //Curly braces code are blocks 

