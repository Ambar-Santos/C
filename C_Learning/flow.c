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
  

    int x = 4;
    x = halveIt(x);
    printf("Half of %d\n", x);

    return 0;
}
