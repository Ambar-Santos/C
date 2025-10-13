#include <stdio.h>

int doubleIt(int number)
{
    return number*2;
}

int halveIt(int number)
{
    return number/2;
}

int main(int argc, const char *argv[])
{
    printf("*** Welcome to my program! ***\n");
  
    printf("Write a number, any integer: \n");
    int x = 0;
    scanf("%d", &x);

    int number = x;
    if (number == 100){
        printf("I like that number! \n");
    }

    x = halveIt(x);
     

    printf("Half of %d is %d\n",number,  x);
    printf("Now lets count from 1 to %d\n", number);

    for(int i = 1; i <= number; i++){
        printf("%d\n", i);
        printf("                  \n");
    }

    printf("And now lets count up to %d\n", x );
    printf("                  \n");
    

      for(int i = 1; i <= x; i++){
        printf("%d\n", i);
        printf("                  \n");
    }

    getchar();

    return 0;
}
