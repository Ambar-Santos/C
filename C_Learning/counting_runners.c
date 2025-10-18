#include<stdio.h>

int update_runner_count(char change_count) {

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
    
    while(keep_counting == 'y'){

        printf("Type + to add runners to the count\n");
        printf("Type - to delete runners from the count\n");
        
        scanf(" %c", &change_count);  // Note: space before %c to skip whitespace
        
        current_count = update_runner_count(change_count);
        printf("The count total is: %d\n", current_count);  
        
        printf("Do you want to keep on counting? y/n \n"); 
        scanf(" %c", &keep_counting); 
        if(keep_counting == 'y'){
            continue;
            printf("MININ\n");
        }else if(keep_counting == 'n'){
            continue;
        }else{
           if (change_count != '+' && change_count != '-') {
            printf("Invalid operation! Please use + or -.\n");
            continue;
                }
        }

    }

        
    
    printf("Press Enter to exit..."); 
    getchar();
    getchar();

    return 0;
}
