#include <stdio.h>

 typedef struct {
	char * name;
	int age;
	char * favorite_color;
    char * hobby;	
} friend;

int main()
{
    
friend ana;
ana.name = "Ana";
ana.age = 19;
ana.favorite_color = "azul";
ana.hobby = "cuteness";

//print 

printf("name \n", ana.name);
return 0;

}