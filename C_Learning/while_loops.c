#include <stdio.h>



int counting_function(int num_end){
    
    int num = 0;

    while(num < num_end){
        num++;
        printf("%d\n", num); 
    }
}





int main(){

    counting_function(10);

    getchar();

    return 0;
}