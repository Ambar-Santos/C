/**
 counter.c
 Simple number counting demonstration program to practice while loops
 Ambar Santos
 Version 1.0
 October 17th 2025 
 */

#include <stdio.h>

void counting_function(int num_end){
    
    int num = 0;

    while(num < num_end){
        num++;
        printf("%d\n", num); 
    }
}



int main(){

    counting_function(100);

    getchar();

    return 0;
}