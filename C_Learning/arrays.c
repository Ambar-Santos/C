# include <limits.h>
# include <stdio.h>


int main(int argc, const char *argv)
{

      int array[10];

      for(int i = 0; i <= 9; i++){
        array[i] = i + 1;
        printf("Number: %d\n", array[i]);
      }

      
}