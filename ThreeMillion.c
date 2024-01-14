/* ThreeMillion.c by Jacob Anderson 2-8-2021 */

/* Input:   Keyboard
   Output:  Screen
   This program will calculate the number of years required to reach 
   or exceed $3 million given a deposit amount and a constant rate of 
   interest.  A while loop will be the mechanism for the calculation of
   simple interest compounded annually.  Input the amount and rate from 
   the keyboard.  Output to the screen the number of years and the final
   amount.  
 */

#include <stdio.h>

int main()
{
	/* Declaration */
	double amount=0.0, interestrate=0.0;
	int years=0;

	/* Heading */
	printf("Three Million Calculation by Jacob Anderson\n\n\n");

	/* Input Section */
	printf("Enter deposit amount: ");
	scanf("%lf", &amount);

	printf("\nEnter interest rate in decimal form (Ex: .05 is 5%): ");
	scanf("%lf", &interestrate);

	/* Processing Section */
	while (amount < 3000000.0)
	{
		amount = amount * interestrate + amount;
		years++;
	}

	/* Output Section */
	printf("\n\n\n%d years to reach $%.2lf\n\n", years, amount);

	return 0;
}



	
	