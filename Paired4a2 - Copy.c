/* Read all the comments.  THE COMMENTS IN UPPERCASE REQUIRE ACTION */

				
#include <stdio.h>  

// CODE PROTOTYPES HERE
// FIRST FUNCTION:  DISPLAY A HEADING THAT SAYS THIS IS PAIRED PROGRAMMMING #4 - COMPLETE THIS PROTOTYPE 
xxxxx printHeading(void); 

// SECOND FUNCTION:  ASK USER TO INPUT A NUMBER THAT CAN ACCOMMODATE UP TO 14 DIGITS WITH A DECIMAL POINT- COMPLETE THIS PROTOTYPE
xxxxx inputNumber (void);

// THIRD FUNCTION:  USES THE INPUT FROM THE USER, MULTIPLIES IT BY 1.06 AND RETURNS THE RESULT - COMPLETE THIS PROTOTYPE
double calcAnswer (xxxxxxx);

// FOURTH FUNCTION:  PRINTS THE RESULT - COMPLETE THIS PROTOYPE
 void printAnswer (xxxxxxx);

//--------------------------------------------------------------------------------------------------------------------  
int main(void)  
{	
    // DECLARE VARIABLES - COMPLETE THE CODE
	xxxxxxxx number = 0.0; // what should the data type of these variables be, given the information above?
	xxxxxxxx answer = 0.0;
	
	// Call the Heading Function
    printHeading();  // this is good to go	
	
    // CALL INPUT FUNCTION - COMPLETE THE CODE
	number =
	
	// CALL THE CALCULATION FUNCTION - COMPLETE THE CODE
	answer = 
	
	// CALL THE PRINT RESULT FUNCTION - COMPLETE THE CODE
	printAnswer(xxxxxxxxxxx); // what needs to be passed to this function?
	
	return 0;
}	
//------------------------------------------------------------------------------------------------------------------
//FUNCTION DEFINITIONS BELOW, COMPLETE THE FUNCTION HEADERS

// printHeading function
void printHeading(xxxxx)
{
	printf"This is Paired Programming #4\n\n");
}
//------------------------------------------------------------------------------------------------------------------
// inputNumber function
xxxxxx inputNumber(void)
{
          localNumber = 0.0;  // COMPLETE THIS DECLARATION
	printf("Please enter a number: ");
	scanf("%xx", localNumber); // COMPLETE THIS SCANF
	return localNumber;
}
//------------------------------------------------------------------------------------------------------------------
//calcAnswer function
xxxxxxxx calcAnswer(double xxxxxxxx)
{
	double localAnswer = 0.0;
	localAnswer = xxxxxxxxx * 1.06; // COMPLETE THIS STATEMENT
	return xxxxxxx;  // COMPLETE THIS STATEMENT
}
//------------------------------------------------------------------------------------------------------------------
// printAnswer function
xxxxxxx printAnswer(double xxxxxxxx)
{
	printf("\n\nThe answer is:       %lf\n\n", xxxxxxx); // COMPLETE THIS STATEMENT
}
