/*UsageV5.c by Jacob Anderson and Brandon Smith 3/10/2021 */
/* Input:   Keyboard
   Output:  Screen
	This program calculates the total cost to use the Jayhawk Supercomputer,
	as well as the total cost and number of users in the current cycle. */

#include <stdio.h>

int main(void)

{
	/***************************** Variable Declarations **********************/
	
	int hours=0, seconds=0, totalseconds=0, minutes=0, users=0;
	
	float totalhours=0.0f, days=0.0f, rate=0.0f, cost=0.0f, totalcost=0.0f; 
	
	char anothaone = 'y';

	/****************************** Introduction ******************************/
	
	printf("\nJayhawk Supercomputer Usage Calculator by Jacob Anderson and Brandon Smith\n");
	
	/***************************** Begins Main Loop ***************************/
	
	while (anothaone == 'y' || anothaone == 'Y')
{
	/****************************  Input Section ******************************/
	
	
	
	
	
	///////////////////////////// Hours ///////////////////////////////////////
	do
	{
		printf("\nEnter hours used as a whole number (0-100)  "); 
		scanf(" %d", &hours);
		
	if (hours > 100 || hours < 0)
	{
		printf("   Out of range! Enter 0 through 100\n");
	}
	}while (hours > 100 || hours < 0);
	
	
	//////////////////////////// Minutes //////////////////////////////////////
	
	
	do
	{	
		printf("\nEnter minutes used as a whole number (0-59) ");
		scanf(" %d", &minutes);
		
	if (minutes > 59 || minutes < 0)
	{
			printf("   Out of range! Enter 0 through 59\n");
	}
	}while (minutes > 59 || minutes < 0);
	

	/////////////////////////// Seconds //////////////////////////////////////


	
	do
	{
		printf("\nEnter seconds used as a whole number (0-59) ");
		scanf(" %d", &seconds);
		
	if (seconds > 59 || seconds < 0)
	{	
		printf("   Out of range! Enter 0 through 59\n");
	}
	}while (seconds > 59 || seconds < 0);
	
	/************************* Processing Section ******************************/
	
	totalseconds = hours*60*60+minutes*60+seconds;

	totalhours = (float)hours + (float)minutes/60.0f + (float)seconds/60.0f/60.0f;
	
	days = totalhours/24.0f; 
	
	printf("\n\nTotal Seconds of Usage = %d\n", totalseconds);
	
	printf("\nTotal Hours of Usage   = %8.4f\n", totalhours); 
	
	printf("\nTotal Days of Usage    = %8.4f\n", days);
	
	if (totalseconds < 3001)  //Determines the rate the user is charged.
		rate = .67f;
	else if (totalseconds < 6001)
		rate = .57f;
	else if (totalseconds < 9001)
		rate = .47f;
	else if (totalseconds < 36001)
		rate = .37f;
	else
		rate = .27f;
	
	cost = (float)totalseconds * rate;

	/*********************** Total Usage Output Section *************************/

	printf("\nRate Per Second        = %.2f\n\n", rate);
	
	printf("Usage Charge           = $%5.2f\n\n", cost);
	
	if (cost > 9000.0f)
		printf("\n\nThank you for being a SUPER USER of our Jayhawk SuperComputer!\n");

	totalcost += cost;

	users++;

	
	printf("\nEnter Y to enter calculate another customers usage: ");
	scanf(" %c", &anothaone);
	
	
	printf("\n\nThe total usage cost of all customers is $%5.2f", totalcost);
	printf("\n\nThe total amount of customers entered is %d", users);
	printf("\n\nThanks for using the Jayhawk Supercomputer!\n\n");
	
	return 0;
}