/*
 * Program: Counting Program
 * Description:
 *   This program reads characters from standard input until EOF (Ctrl+D on Linux/Mac,
 *   Ctrl+Z on Windows). It counts:
 *     - Newline characters
 *     - Spaces
 *     - Tabs
 *     - Non-whitespace characters
 *     - Words (defined as sequences of non-whitespace characters)
 *
 * Usage:
 *   Run the program, type text, and finish input with EOF.
 */

#include <stdio.h>

int main (){   
  int c = 0; 
  int nl = 0; 
  int nc = 0;
  int blanks = 0;
  int tabs = 0;
  int words = 0;
  int in_word = 0; 


  //Print Program Title and instructions
  printf("=== Counting Program ===\n");
/*
 * Program: Counting Program
 * Description:
 *   This program reads characters from standard input until EOF (Ctrl+D on Linux/Mac,
 *   Ctrl+Z on Windows). It counts:
 *     - Newline characters
 *     - Spaces
 *     - Tabs
 *     - Non-whitespace characters
 *     - Words (defined as sequences of non-whitespace characters)
 *
 * Usage:
 *   Run the program, type text, and finish input with EOF.
 */  printf("This program counts: \n");
  printf(" - Characters\n");
  printf(" - Spaces\n");
  printf(" - Tabs\n");
  printf(" - New line Characters('\\n')\n");
  printf(" - Words\n"); 
  printf("Type text and finish with EOF (Ctrl+D or Ctrl+Z).\n\n");
  
    while ((c = getchar()) != EOF){
	    if(c == '\n')
	    {
	       ++nl;
         in_word = 0;
  	    }else if(c == ' '){
               ++blanks;
               in_word = 0;
	      }else if(c == '\t'){
               ++tabs;
               in_word = 0;
	      }else{
	         ++nc;
           if (in_word == 0){
            ++words; 
            in_word = 1; 
           }
	      }
 }

  
    printf("\n=== Results ===\n");
    printf("There are %d new line characters \n", nl);
    printf("There are %d characters (letters, numbers, punctuation)\n" , nc);
    printf("There are %d blank spaces \n", blanks);
    printf("There are %d tabs \n", tabs);
    printf("There are %d words \n", words);

  return 0; 	
}
