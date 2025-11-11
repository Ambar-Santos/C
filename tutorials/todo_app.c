

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_DESCRIPTION_LENGTH 256
#define INITIAL_CAPACITY 10 

typedef struct {
	int id;
	char description[MAX_DESCRIPTION_LENGTH];
        bool completed;
     } TodoItem; 

//Global variables 

//Pointer to a to_do item
   TodoItem* todo_list = NULL;
   int todo_count = 0;
   int todo_capacity = 0;
   int next_id = 1;


   void initialize_todo_list() {
      todo_capacity = INITIAL_CAPACITY;
      todo_list = (TodoItem*)malloc(sizeof(TodoItem) * todo_capacity);
      if (todo_list == NULL) {
         printf("Error failed to allocate memory! bad!\n ");
	 exit(EXIT_FAILURE);
      }

      todo_count = 0;
      next_id = 1;
     

   }

   void free_todo_list(){
     if (todo_list != NULL) {
         free(todo_list);
	 todo_list = NULL;
     
     }
     
       todo_count = 0;
       todo_capacity = 0;
       next_id = 1;

   }	   

   
   int main(void){

   //Initialize a function to make use new to do list
   //when entering the application
   //using dynamically allocated memory 
   
   initialize_todo_list();









    //A loops that runs forever until its stopped by the user
    

     int choice;


     do {
         //Display the menu
	
	printf("\n--- Todo List Application ---\n");
        printf("1. Add Todo\n");
        printf("2. List Todos\n");
        printf("3. Mark Todo as Complete\n");	
        printf("4. Delete Todo\n");
	printf("5. Save Todos\n");
	printf("6. Exit\n");
	printf("Enter your choice: ");

         if (scanf("%d", &choice) != 1) {
           printf("Invalid input. Please enter a number.\n");
	   //Clean buffer
	   while(getchar() != '\n');
	   continue; //Skip to next iteration of the loop 
        }

	// consume left over newline character
	while (getchar() != '\n');

	switch (choice){
	    case 6: //exit
	      printf("Exiting application. Have a great day!\n");
	      break;

	    default: 
	      printf("Invalid choice. Please try again.\n");
	
	
	
	
	
	}





    
      } while (choice != 6);     

	   
      free_todo_list();
      return 0;

   }





