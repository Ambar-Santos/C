/**
 People Counter
 This program lets you register a count for 
 how many people pass by
 Ambar Santos
 Version 1.0
 October 17th 2025 
 */


#include<stdio.h>

//This function handles the counting system
int update_people_count(char change_count) {

    static int count = 0;

    if(change_count == '+'){
        count++;
        return count;
    }else if(change_count == '-'){
        count--;
        return count;
    }else{
      printf("Use a valid input, either + or - \n");
      return count;
    }

}


int main()
{
    int current_count;
    char change_count;
    char keep_counting = 'y';
    
    //This while loops handles the main program
    while(keep_counting == 'y'){
        
        printf("Type + to add people to the count\n");
        printf("Type - to delete people from the count\n");
        
        scanf(" %c", &change_count);  // Note: space before %c to skip whitespace
        
        current_count = update_people_count(change_count);
        printf("The count total is: %d\n", current_count);  
        
      
        printf("Do you want to keep on counting? y/n \n"); 
        scanf(" %c", &keep_counting); 
        
        if(keep_counting == 'y'){
            continue;
        }else if(keep_counting == 'n'){
            continue; //It still works after putting continue instead of break 
        }else{
           if (change_count != '+' && change_count != '-') {
            printf("Invalid operation! Please use + or -.\n");
            continue;
                }
        }

    }

        
    
    printf("...Press Enter to exit..."); 
    getchar();
    getchar();
   

    return 0;
}
