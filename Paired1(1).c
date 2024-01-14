/* Paired1.c by Douglas Knowlton and Jacob Anderson 1/27/2021 */

// something is wrong with the next line of code.  Scrutinize it and correct it.  gcc might also help you
#include <stdio.h> // changed from parentheses to <>.  
  
int main(void)  
		
{	
	// declare an integer variable, naming it anything you wish, initializing it to zero.

	int var=0;

	// the next line has problems.  Use gcc to identify them and correct them
	printf("This is Paired Programming #1 \n\n"); // added quotation marks and changed forward slashes to back slashes.

	// code a statement that will display a message on the screen prompting your user to enter a number
	// variable you declared above
	printf ("How old are you? ");
	

	// code a statement that gathers input from the keyboard from your user and places it in the integer
	// variable you declared above
	scanf (" %d", &var);
	
	// the next line is supposed to print the value of the integer variable, but it has problems
	printf("The value %d has been entered\n", var); // put % before d and changed x to var.
	
	// this next line is incorrect.  Use gcc to identify and correct 
	return 0;	// changed upper case R to lower case r.
}