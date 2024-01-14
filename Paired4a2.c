/* Read all the comments.  THE COMMENTS IN UPPERCASE REQUIRE ACTION */

				
#include <stdio.h>  

// CODE PROTOTYPES HERE
// FIRST FUNCTION:  DISPLAY A HEADING THAT SAYS THIS IS PAIRED PROGRAMMMING #4 - COMPLETE THIS PROTOTYPE 
void printHeading(void); 

// SECOND FUNCTION:  ASK USER TO INPUT A NUMBER THAT CAN ACCOMMODATE UP TO 14 DIGITS WITH A DECIMAL POINT- COMPLETE THIS PROTOTYPE
double inputNumber (void);

// THIRD FUNCTION:  USES THE INPUT FROM THE USER, MULTIPLIES IT BY 1.06 AND RETURNS THE RESULT - COMPLETE THIS PROTOTYPE
double calcAnswer (double);

// FOURTH FUNCTION:  PRINTS THE RESULT - COMPLETE THIS PROTOYPE
 void printAnswer (double);

//--------------------------------------------------------------------------------------------------------------------  
int main(void)  
{	
    // DECLARE VARIABLES - COMPLETE THE CODE
	double number = 0.0; // what should the data type of these variables be, given the information above?
	double answer = 0.0;
	
	// Call the Heading Function
    printHeading();  // this is good to go	
	
    // CALL INPUT FUNCTION - COMPLETE THE CODE
	number = inputNumber();
	
	// CALL THE CALCULATION FUNCTION - COMPLETE THE CODE
	answer = calcAnswer(number);
	
	// CALL THE PRINT RESULT FUNCTION - COMPLETE THE CODE
	printAnswer(answer); // what needs to be passed to this function?
	
	return 0;
}	
//------------------------------------------------------------------------------------------------------------------
//FUNCTION DEFINITIONS BELOW, COMPLETE THE FUNCTION HEADERS

// printHeading function
void printHeading(void)
{
	printf("This is Paired Programming #4\n\n");
}
//------------------------------------------------------------------------------------------------------------------
// inputNumber function
double inputNumber(void)
{
        double localNumber = 0.0;  // COMPLETE THIS DECLARATION
	printf("Please enter a number: ");
	scanf(" %lf", &localNumber); // COMPLETE THIS SCANF
	return localNumber;
}
//------------------------------------------------------------------------------------------------------------------
//calcAnswer function
double calcAnswer(double localNumber)
{
	double localAnswer = 0.0;
	localAnswer = localNumber * 1.06; // COMPLETE THIS STATEMENT
	return localAnswer;  // COMPLETE THIS STATEMENT
}
//------------------------------------------------------------------------------------------------------------------
// printAnswer function
void printAnswer(double calcAnswer)
{
	printf("\n\nThe answer is:       %lf\n\n", calcAnswer); // COMPLETE THIS STATEMENT
}
