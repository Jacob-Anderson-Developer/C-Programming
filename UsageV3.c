/*UsageV3.c by Jacob Anderson and Brandon Smith 2/10/2021 */

#include <stdio.h>

int main(void)

{
	int hours=0, seconds=0, totalseconds=0, minutes=0; //Defines our variables.
	
	float totalhours=0.0f, days=0.0f, rate=0.0f, cost=0.0f; //Defines our variables.
	
	printf("\nJayhawk Supercomputer Usage Calculator by Jacob Anderson and Brandon Smith\n");
	
	do // Lines 14-45 are there to input exact time spent on SuperComputer, within allowed ranges.
	{
		printf("\nEnter hours used as a whole number (0-100)  "); 
		scanf(" %d", &hours);
		
	if (hours > 100 || hours < 0)
	{
		printf("   Out of range! Enter 0 through 100\n"); // Lines 21, 32, 43, inform the user they are out of the allowed range.
	}
	}while (hours > 100 || hours < 0);
	
	do
	{	
		printf("\nEnter minutes used as a whole number (0-59) ");
		scanf(" %d", &minutes);
		
	if (minutes > 59 || minutes < 0)
	{
			printf("   Out of range! Enter 0 through 59\n");
	}
	}while (minutes > 59|| minutes < 0);
		
	do
	{
		printf("\nEnter seconds used as a whole number (0-59) ");
		scanf(" %d", &seconds);
		
	if (seconds > 59 || seconds < 0)
	{	
		printf("   Out of range! Enter 0 through 59\n");
	}
	}while (seconds > 59 || seconds < 0);
	
	totalseconds = hours*60*60+minutes*60+seconds; //Calculates total seconds

	totalhours = (float)hours + (float)minutes/60.0f + (float)seconds/60.0f/60.0f; //Calculates total hours
	
	days = totalhours/24.0f; //Calculates total days
	
	printf("\n\nTotal Seconds of Usage = %d\n", totalseconds); //Prints total seconds of usage
	
	printf("\nTotal Hours of Usage   = %8.4f\n", totalhours); // Prints total hours of usage
	
	printf("\nTotal Days of Usage    = %8.4f\n", days); //Prints total days of usage
	
	if (totalseconds < 3001)  //Lines 59-68 determine the rate the user is charged.
		rate = .67f;
	else if (totalseconds < 6001)
		rate = .57f;
	else if (totalseconds < 9001)
		rate = .47f;
	else if (totalseconds < 36001)
		rate = .37f;
	else
		rate = .27f;
	
	cost = (float)totalseconds * rate; //Defines what the cost to the user is.

	printf("\nRate Per Second        = %.2f\n\n", rate); //Prints rate per second.
	
	printf("Usage Charge           = $%5.2f\n\n", cost); // Prints the cost for the user.
	
	if (cost > 9000.0f) // Calculates if user is a SUPER USER.
		printf("\n\nThank you for being a SUPER USER of our Jayhawk SuperComputer!\n"); //Informs the user that they are a SUPER USER.
	
	printf("\n\nThanks for using the Jayhawk Supercomputer!\n\n"); // Thanks the user.
	
	return 0;
}