//This is code from the c programming book K&R 2nd edition
//1.5.3 Line Counting


#include <stdio.h>

/* count lines in input */

int main()
{
 int c, nl; 

 nl = 0;
 while ((c = getchar()) != EOF){
	if (c == '\n'){
         ++nl;
	}	
     printf("%d\n", nl);
 }

     return 0; 

}
