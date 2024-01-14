/* Calories.c by Jacob Anderson 2-17-2021 */

#include <stdio.h>

int main(void)
{
   // SEE INSTRUCTIONS in PART TWO link 
   int breakfast = 0, lunch = 0, dinner = 0, sum=0;
   float avg = 0.0f;
   
   // Inputs  
   printf("C calorie counter by Jacob Anderson\n");
   printf("How many calories did you consume for breakfast?\n");
   scanf("%d", &breakfast);

   printf("How many calories did you consume for lunch?\n" );
   scanf("%d", &lunch); 
   
   printf("How many calories did you consume for dinner?\n" );
   scanf("%d", &dinner); 
 
   // calculations
   sum = breakfast + lunch + dinner; 
    
   // uncomment line below and complete it
   avg = (float) sum / 3.0f;
   
   printf( "\n\n\nTotal Calories:  %d\n", sum ); 
   printf( "\nAverage Calories Per Meal:  %.2f\n", avg);
   
   return 0;
   
}