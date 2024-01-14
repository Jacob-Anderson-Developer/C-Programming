/* Age.C by Jacob Anderson 2-8-2021 */

/* Input:   Keyboard
   Output:  Screen
   This program requests a person's age, performs input validation
   on the input value and displays the age.  The age will be validated 
   to ensure that it is not a negative value and does not exceed 120.
 */

#include <stdio.h>


int main(void)
  {
  /* Variable Declaration */
  int age=0;

  /* Heading */
  printf("Age Validation by Jacob Anderson\n\n");

  
  /* Input Section. Values less than 0 or greater than 120 are rejected.
     The user is looped back for re-input. */

	do
	{
		printf("Enter age (0-120): "); //Prompts user to enter age.
		scanf ("%d", &age);  // Takes users input.
		if (age < 0 || age > 120); // Measures if parameters are being met.
		{
			
			printf("Try again, please enter age between 0-120\n");  //Informs user to keep inputs within parameters.
			
		}
	}while 	(age < 0 || age > 120); // Loops back if parameters are not being met.
		


  /* Output Section */
  printf("\n\nThe age is %d\n", age);

  return 0;
  }
