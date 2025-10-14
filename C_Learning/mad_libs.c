//Mad libs program 
//Bro code course

#include <stdio.h>
#include <string.h>

int main() {

    //Mad Libs Game 

    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";
    
    printf("Enter an adjetive (descripction): \n");
    fgets(adjective1, sizeof(adjective1), stdin);
    //Getting rid of the newline character in the buffer
    adjective1[strlen(adjective1) - 1 ] = '\0';

    printf("Enter a noun (animal or person): \n");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1 ] = '\0';

    printf("Enter an adjetive (descripction): \n"); 
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1 ] = '\0';

    printf("Enter a verb (ending w/ -ing): \n");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1 ] = '\0';

    printf("Enter an adjetive (descripction): \n");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1 ] = '\0';

    printf("  Today I went to a %s Library.\n", adjective1);
    printf("In the door there was a really nice %s.\n", noun);
    printf("%s was %s!\n", noun, adjective2, verb);
    printf("I was %s!\n", adjective3);
   
    getchar();

  return 0;
}