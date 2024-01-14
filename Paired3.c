/* Read all the comments.  THE COMMENTS IN UPPERCASE REQUIRE ACTION */

// This exercise is a practice review of topics.
				
#include <stdio.h>  
  
int main(void)  
{	
    // declare and initialize variables
	// this program is not asking the user for input, therefore the variables 
	// are being initialized to specific values, leave these as is
	int variable1 = 64;
	float variable2 = 1577.33f, variable3 = 0.0f;
	
	// display heading
	printf("This is Paired Programming #3\n\n");
 	
	//CALCULATE variable3, WHICH IS variable2 DIVIDED BY variable1 - BE SURE TO USE TYPECASTING
	variable3 = variable2 / (float) variable1;
	
	
	// DISPLAY variable3, using a minimum width of ten and a precision factor of three
	printf(" %10.3f", variable3);
	
	// DISPLAY variable3 using only a precision factor of four
	printf("\n%.4f", variable3);
	
	// DISPLAY variable1, using a minimum width of twelve and a precision factor of five
	printf("\n%12.5d", variable1);
	
	// DISPLAY variable1, using only a precision factor of three
	printf("\n%.3d", variable1);
	
    // end program
	return 0;	
}