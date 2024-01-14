/*Usagev1.c by Jacob Anderson and Brandon Smith 1/25/2021 */

#include <stdio.h>

int main(void)

{
	int hours=0, seconds=0, totalseconds=0, minutes=0;
	
	float totalhours, days, totalminutes;
	
	printf("Jayhawk Supercomputer Usage Calculator by Jacob Anderson and Brandon Smith\n");
	
	printf("Enter hours used as a whole number (1-100) : ");
	
	scanf(" %d", &hours);
	
	printf("Enter minutes used as a whole number (1-59): ");
	
	scanf(" %d", &minutes);
	
	printf("Enter seconds used as a whole number(1-59) : ");
	
	scanf(" %d", &seconds);

	totalseconds= hours*60*60+minutes*60+seconds;

	totalminutes= (float) minutes/60;
	
	totalhours= (float) hours+ (float) totalminutes;
	
	days= (float) totalhours/24;
	
	printf ("\n\nTotal Seconds of Usage =   %d\n", totalseconds);
	
	printf ("Total Hours of Usage = %3.4f\n", totalhours);
	
	printf ("Total Days of Usage = %3.4f\n", days);
	
	printf ("\n\nThanks for using the Jayhawk Supercomputer!\n");
	
	return 0;
	
}