/* fundraiserfun.c by Jacob Anderson 3-9-2021*/


#include <stdio.h>

//////////////////////Prototypes//////////////////////

	void printHeading   (void);
	int getBarsSold     (void);
	float doMath        (int);
	void printDonation  (int,float);
	char getAgain       (void);
	void printFinal     (void);

//////////////////////Globals////////////////////////

	int count = 0;
	float grandTotal = 0.0f;

////////////////////Local Variables///////////////////

int main(void)
{
	int barsSold=0, count=0;
	float donationAmount=0.0f, grandTotal=0.0f;
	char again = 'Y';
	printHeading (); 
	while (again == 'y' || again == 'Y')
	{
	barsSold = getBarsSold();
	donationAmount = doMath(barsSold); 
	printDonation (barsSold,donationAmount); 
	again = getAgain(); 
	}
	printFinal();
	return 0;
}	
/////////////////////////////////////////Define Functions/////////////////////////////////////
	
	void printHeading (void)
	{
	printf("Donation Calculator by Jacob Anderson\n");
	}	
	
//////////////////////////////////////////Begin Main Loop/////////////////////////////////////
	


	int getBarsSold (void)
	{
		int localBarsSold = 0;
		do
		{
			printf("\nEnter candy bars sold (1-150) ");
			scanf(" %d", &localBarsSold);
			if (localBarsSold < 1 || localBarsSold > 150)
			{
				printf("Try Again, enter 1-150\n");
			}
		}while (localBarsSold < 1 || localBarsSold > 150);
		return localBarsSold;
		
	}
//////////////////////////////////////////////doMath////////////////////////////////////////

	float doMath (int localBarsSold2)
	{
	float localDonation = 0.0f;
	localDonation = (float) localBarsSold2 *2.75f;
	grandTotal += localDonation;               
	count++;
	return localDonation;	
	}
////////////////////////////////////////////printDonation////////////////////////////////////////	
	
	void printDonation (int b, float d)
	{
		printf("Donor purchased %d candy bars for a donation amount of $%.2f\n\n", 			   b, d);
	}
	
////////////////////////////////////////////////getAgain////////////////////////////////////	
	
	char getAgain (void)
	
	{
		char localAgain = '\0';
		printf("Enter Y to process another ");
		scanf(" %c", &localAgain);
		return localAgain;
	}
	
///////////////////////////////////////////////printFinal/////////////////////////////////////	
	
	void printFinal (void)
	
{
	printf("Count is %d \n", count); 
	printf("Grand Total is $%.2f\n", grandTotal); 
}