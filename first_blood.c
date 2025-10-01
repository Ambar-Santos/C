//Program: New line counter
//New features
/* - Counting characters
 * - Couting words 
 * - A menu 
 * - A way to let the user decide if continue or not(?)
 */

#include <stdio.h>

int main (){
  //Variables
    int c, nl,nc,nw ; 

  nl = 0; //Ne line, new character and new word counter
  nc = 0;
  nw = 0;
  
    while ((c = getchar()) != EOF){

	    if(c == '\n')
	    {
	       ++nl;

  	    }else if(c != ' ' && c != '\t' ) {
               ++nc;
	    }

       	    
       

    } 
  
   putchar('\n');
    printf("There are %d new line characters \n", nl);
       printf("There are %d characters (letters, numbers, punctuation)\n" , nc);

  return 0; 	
}
