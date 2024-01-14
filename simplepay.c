/* Simplepay.c by Jacob Anderson 3-9-2021*/

#include <stdio.h>

void printHeading (void);
int getHours (void);
float calcPay (int);
void printPay (float);

	/////////////////////////////////////////////////////////////////////////////////


	int main(void)
	{
	int hours = 0;
	float gross = 0.0f;
	printHeading ();
	hours = gethours();
	gross = calcPay (hours);
	printPay (gross);
	return 0;
	}
	/////////////////////////////////////////////////////////////////////////////////
	
	void printHeading(void)
	{
		printf ("simplePay by Jacob Anderson!\n\n");
	}
	
	//////////////////////////////////////////////////////////////////////////////////
	
	int gethours (void)
	{
		int localHours = 0;
		printf ("Please enter hours worked: ");
		scanf (" %d", &localHours);
		return localHours;
	}
	
	///////////////////////////////////////////////////////////////////////////////////
	
	float calcPay (int localHoursIn)
	{
		return (float) localHoursIn * 15.5f;
	}
	////////////////////////////////////////////////////////////////////////////////////
	
	void printPay (float localGross)
	{
		printf("Gross Pay is $%.2f\n\n", localGross);
	}
	
