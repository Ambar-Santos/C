//Secret name program
/* This programs has a hardcoded secret name 
the users type their name to see if it is the same 
as the secret name, and if it is, it unlocks a secret
message to all the people with that name*/

#include <stdio.h>
#include <string.h>

void secret_message(){
     printf("DAVID, You are another one of us\n");
     printf("You must know, to eternal wisdom\n");
     printf("That is, you never really know things for sure\n");
     printf("You must not forget, you can always be wrong\n");
     printf("And you can't always be right \n");
    }

int main(){
   const char * secret_name = "David";

   char name[100] = "";

   printf("***Welcome to the secret name program***\n");
   printf("Type your name, we will see if you are worthy...\n");
   scanf("%99s", name);
    
   printf("                                                 \n");
   if(strncmp(name, secret_name, 100) == 0){
       secret_message();
   }else{
      printf("Your name is nice, just not that much \n");
   }

   getchar();


}