//Directivas del preprocesador y variables 
//Variable: Posicion de memoria donde se puede asignar un dato

#include <stdio.h>//Libreria

#define PI 3.1416 //Macro 


int y = 5; //Variable Global

int main(){
  
    int fav_num = 0; //Users favorite Integer Number
    printf("Type your favorite integer number\n");
    scanf("%d", &fav_num);

    printf("I hate %d  man, it just sucks!! \n", fav_num);
    
    printf("Isn't %d just better?\n", y);


    return 0;
}