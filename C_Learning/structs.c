
#include <stdio.h>



typedef struct 
{
   int x, y; // Properties
   short life; 
   char *name; //String 

} Man; //Name 



void structs()
{



 int var;
 Man man, man2;
 
 man.x = 89;
 man.y = 9;
 man.life = 100;
 man.name = "a man";

 man2.x = 100;
 man2.y = 100;
 man2.life = 100;
 man2.name = "Ambisk";

 printf("Name of man2: %s\n", man2.name);
}

int main()
{
 structs();

    return 0;
}