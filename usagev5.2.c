/*UsageV4.c by Jacob Anderson and Brandon Smith 2/15/2021 */
/* Input:   Keyboard
   Output:  Screen
	This program calculates the total cost to use the Jayhawk Supercomputer,
	as well as the total cost and number of users in the current cycle. */

#include <stdio.h>


	/***************************** Prototypes *********************************/

	void printHeading  (void); // done

	int getHours      (void); // done
	
	int getMinutes    (void);
	
	int getSeconds    (void);
	
	float getDays       (int, int, int);
	
	float getRate       (int);
	
	float getCost       (float, float);
	
	void printUserTotal    (float);
	
	int printSuper          (float);
	
	char reRun         (void);
	
	float totalcost (float);
	
	void printComplete (int, float, int);

	/***************************** Globals ************************************/

	
	int users=0, superusers=0;


	/***************************** Begin Main *********************************/

int main(void)

{
	printHeading();
	int hours = 0, minutes = 0, seconds = 0;
	float days = 0.0f, rate = 0.0f, cost = 0.0f, totalcost = 0.0f;
	char anothaone = 'Y';
	while (anothaone =='y' || anothaone == 'Y')
	{
		hours = getHours();
		minutes = getMinutes();
		seconds = getSeconds();
		days = getDays(hours, minutes, seconds);
		rate = getRate(seconds);
		cost = getCost(days, rate);
		printUserTotal(cost);
		printSuper(cost);
		users++;
		anothaone = reRun();
		totalcost(cost);
	}
	printComplete(users, totalcost, superusers);


}
	/****************************** printHeading ******************************/

void printHeading(void)
{	
	printf("\nJayhawk Supercomputer Usage Calculator by Jacob Anderson and Brandon Smith\n");	
}

   /****************************** getHours ************************************/

int getHours(void)
{
	int hours = 0;
		do
	{
		printf("\nEnter hours used as a whole number (0-100)  "); //Prompts user for first input within allowed range
		scanf(" %d", &hours);
		
	if (hours > 100 || hours < 0)
	{
		printf("   Out of range! Enter 0 through 100\n");
	}
	}while (hours > 100 || hours < 0);
	return hours;
}
  /****************************** getMinutes *****************************************/
  
int getMinutes(void)
{
	int minutes = 0;
do
	{	
		printf("\nEnter minutes used as a whole number (0-59) "); //Prompts user for second input within allowed range
		scanf(" %d", &minutes);
		
	if (minutes > 59 || minutes < 0)
	{
			printf("   Out of range! Enter 0 through 59\n");
	}
	}while (minutes > 59 || minutes < 0);
	return minutes;
}

   /****************************** getSeconds **********************************/
   
int getSeconds(void)
{
	int seconds = 0;
	do
	{
		printf("\nEnter seconds used as a whole number (0-59) "); //Prompts user for third input within allowed range
		scanf(" %d", &seconds);
		
	if (seconds > 59 || seconds < 0)
	{	
		printf("   Out of range! Enter 0 through 59\n");
	}
	}while (seconds > 59 || seconds < 0);
	return seconds;
}
	/**************************** getDays **************************************/

float getDays(int getHours, int getMinutes, int getSeconds)

{
	int totalseconds = 0;
	float totalhours =0.0f, days = 0.0f;
	
	totalseconds = getHours*60*60+getMinutes*60+getSeconds;  //Calculates the seconds used

	totalhours = (float)getHours + (float)getMinutes/60.0f + (float)getSeconds/60.0f/60.0f;  //Calculates the hours used
	
	days = totalhours/24.0f; //Calculates the amount of days used
	
	printf("\n\nTotal Seconds of Usage = %d\n", totalseconds);  //Prints total seconds of usage
	
	printf("\nTotal Hours of Usage   = %8.4f\n", totalhours); //Prints total hours of usage
	
	printf("\nTotal Days of Usage    = %8.4f\n", days); // Prints total days of usage
	
	return days;
}

   /*************************** getRate *******************************************/
 
float getRate(int getSeconds)
{
	float rate = 0.0f;
	
	if (getSeconds < 3001)  //Determines the rate the user is charged.
		rate = .67f;
	else if (getSecondseconds < 6001)
		rate = .57f;
	else if (getSeconds < 9001)
		rate = .47f;
	else if (getSeconds < 36001)
		rate = .37f;
	else
		rate = .27f;
	
	printf("\nRate Per Second        = %.2f\n\n", rate); //Prints the rate user is being charged
	
	return rate;
}

    /*********************** getCost ***************************************/

float getCost(float getDays, float getRate)
{
	float cost = 0.0f, totalseconds = 0.0f;
	totalseconds = getDays * 86400.0f;
	cost = totalseconds * getRate;
	return cost;
}
	
	/*************************** printUserTotal *******************************/

void printUserTotal(float cost)
{
	printf("Usage Charge           = $%5.2f\n\n", cost); //Prints the total the user is being charged
}

   /****************************** printSuper   ********************************/
   
int printSuper(float cost)
{
		if (cost > 9000.0f)
	{	
	printf("\n\nThank you for being a SUPER USER of our Jayhawk SuperComputer!\n"); //Informs the user that they are a super user
	superusers++; // Adds one to the user count every time the user is a super user
	}	
	return superusers;
}
	/************************* Total Cost ****************************/
	
float totalcost(float cost)
{
	totalcost += cost;
}
	return totalcost;
	
	
	/************************* reRun *********************************/

char reRun(void)
{
	char anothaone;
	do {
	printf("\nEnter Y to enter calculate another customers usage or N to terminate the program: ");  
	scanf(" %c", &anothaone);
	} while (anothaone != 'n' && anothaone != 'N' && anothaone != 'y' && anothaone !='Y');  //Prompts user again in case of incorrect input
return anothaone;
}

 /************************************ printComplete *********************************/
 
 void printComplete(int users, float totalcost, int superusers)
 {
	printf("\n\nNumber of Users Processed:    %d", users); //Prints users processed
	printf("\n\nGrand total of all Usage Charges:   $%5.2f", totalcost); //Prints grand total of all charges between users
	printf("\n\nThe total amount of Superusers entered is %d", superusers); //Prints the total amount of super users
	printf("\n\nThanks for using the Jayhawk SuperComputer!\n\n"); //Thanks the user for using the Jayhawk Supercomputer
 }