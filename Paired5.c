/* Paired5.c by Jacob Anderson and Keaton Rhoades */

/* Input:  Keyboard
   Output: Screen

   This program will simulate a check deposit slip.  Allow keyboard input for 4 deposits.
   If an entry is not used, enter 0.  
   If a deposit is more than $10,000, inform the user that this deposit will be reported to the IRS.
   Place these values in an array, sum 
 * them and display the total on the screen */

#include <stdio.h>

int main(void)
{
	/* Declarations */
	double entry[4] = {0.0};  // This is the array declaration
	int i = 0;
	double total = 0.0, deposit = 0.0;

	/* Heading */
	printf("This is Paired Programming #5\n\n");

	/* Input and Processing*/
	
	for(i = 0; i < 4; i++)   // COMPLETE THIS LINE OF CODE
	{
		printf("Enter Deposit #%d amt ",i+1);
		scanf("%lf", &entry[i]);  // COMPLETE THIS LINE OF CODE
		
		// COMPLETE THE IF STATEMENT, IF THE DEPOSIT IS MORE THAN $10,000 TELL USER IT WILL BE REPORTED TO IRS
		if (entry[i] > 10000.0)
		{
			printf("Because the deposit is more that $10,000 it will be reported to the IRS.\n");
		}
		// COMPLETE THE STATEMENT TO ADD THE DEPOSIT TO THE total VARIABLE
	total = total + entry[i];
	}

	/* Output */
	printf("\n\nTotal Deposits:  %.2lf\n", total);

    return 0;
}