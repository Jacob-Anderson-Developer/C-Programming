/*Usagev1.c by Jacob Anderson and Brandon Smith 1/25/2021 */

#include <stdio.h>

int main(void)

{
	int hours=0, minutes=0, seconds=0, totalseconds=0;
	
	float  totalhours=0.0, days=0.0, totalminutes=0.0;
	
	printf("Jayhawk Supercomputer Usage Calculator by Jacob Anderson and Brandon Smith\n");
	
	printf("Enter hours used as a whole number (1-100) : ");
	
	scanf(" %d", &hours);
	
	printf("Enter minutes used as a whole number (1-59): ");
	
	scanf(" %d", &minutes);
	
	printf("Enter seconds used as a whole number (1-59) : ");
	
	scanf(" %d", &seconds);

	totalseconds= hours*60*60+minutes*60+seconds;

	totalminutes= (float)hours*60;
	
	totalhours= (float)hours + (float)totalminutes/60 + (float)totalseconds/60/60;
	
	printf ("\n\nTotal Seconds of Usage =   %d\n", totalseconds);
	
	printf ("Total Hours of Usage = %3.4f\n", totalhours);
	
	printf ("Total Days of Usage = %3.4f\n", days);
	
	printf ("\n\nThanks for using the Jayhawk Supercomputer!\n");
	
	return 0;
	
}