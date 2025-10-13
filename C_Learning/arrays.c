# include <limits.h>
# include <stdio.h>


int max(int array[], int n){
    int max_num = 0;

   
  //Sort trough the array and replace the bigger number
    for(int i = 0; i < n; i++){
        
        if(array[i] > max_num)
        {
            max_num = array[i];
        }
     
    }
    
    printf("The biggest number in the array is: %d", max_num);
    return 0;
}

int main()
{
  
      int array[10];

      for(int i = 0; i < 10; i++){
        array[i] = i + 1;
        printf("The current number is: %d\n", array[i]);
      }
  max(array, 10);

}