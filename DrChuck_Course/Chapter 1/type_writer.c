//Type writer program 
#include <stdio.h>

int main() {
    int c;
  /* copy input to output*/
    while ((c = getchar()) != EOF){
        putchar(c);
    }
    return 0;
}