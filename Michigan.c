/* Michigan.c by Jacob Anderson and Brandon Smith 3/15/2021 
	Input:	Keyboard
	Output: Screen
	This program prompts the user to input the high temperature each day
	over a two week period. It then takes the temperature input to output 
	if the day was cold or warm, as well as taking the temperatures and
	averaging them out. */

#include <stdio.h>

int main(void)
{
	/*************** Declarations **********************/
	int temperature[14] = {0}, ctr = 0, inner = 0, outer = 0, didSwap = 0, x = 0;
	int i = 0, tempTot = 0, warmdays = 0, colddays = 0, hotdays = 0;
	float avgTemp = 0.0f;
	
	
	
	
	/**************** Heading *************************/
	printf("Weather Analyzer Application by Jacob Anderson and Brandon Smith\n\n");
	
	/************* Input and Processing ****************/
	printf("Enter the high temperature for 14 days below");
	//Accepts user input for each of the 14 array elements
	
	for(i=0; i < 14; i++)
	{
		do{
		printf("\nWhat is the high temp for day # %d? ", i+1);
		scanf("%d", &temperature[i]);
		
		if (temperature[i] > 100 || temperature[i] < 0)
		{ 
		printf("\n Please enter only 0-100!");
		}
		}while (temperature[i] > 100 || temperature[i] < 0);
		
		if (temperature[i] >= 60)
		warmdays++;
		else
		colddays++;
	/******************* Temperature Remarks *******************/
		if (temperature[i] > 70)
			{
			hotdays++;
			if (hotdays == 1)
				printf("Boy it sure is warm!\n");
			else if (hotdays == 2)
				printf("Sheesh I'm sweating!\n");
			else if (hotdays == 3)
				printf("I'm getting delirious!\n");
			else if (hotdays == 4)
				printf("The freeway is melting!\n");
			else if (hotdays >= 5 && hotdays <= 9)
				printf("Someone needs to turn the sun off!\n");
			else 
				printf("Wow, global warming is real!\n");
			}	
	}
	
	printf("\n\nThe number of warm days: %d", warmdays);
	printf("\n\nThe number of cold days: %d", colddays);
	

	/******************* Avg Temp Calculation and Output ******************/

	tempTot = temperature[0] +temperature[1] + temperature[2] + temperature[3]
	+ temperature[4] + temperature[5] + temperature[6] + temperature[7] + temperature[8]
	+ temperature[9] + temperature[10] + temperature[11] + temperature[12] + temperature[13];

	avgTemp = (float)tempTot/14.0f;
	
	printf("\n\nThe average high temperature: %.2f", avgTemp);
	
	
	if (avgTemp >= 90.0f)  //Determines what the weeks were like based on the average of the temperatures entered
	printf("\n\nThese two weeks were blazing hot!");
	else if (avgTemp >= 80.0f)
	printf("\n\nThese two weeks were quite hot!");
	else if (avgTemp >= 70.0f)
	printf("\n\nThese two weeks were hot for Michigan");
	else if (avgTemp >= 60.0f)
	printf("\n\nThese two weeks were decent for Michigan");
	else if (avgTemp >= 50.0f)
	printf("\n\nThese two weeks were somewhat cold");
	else
	printf("\n\nThese two weeks were basically cold");

	/*********************** Lowest Sorting and Output ******************************/
	
for (outer = 0; outer < 13; outer ++) //A bubble array that sorts the temperatures entered from lowest to highest
{
		didSwap = 0;
		for (inner = outer; inner < 14; inner++)
		{
			if (temperature[inner] < temperature[outer]) //Arranges the array to sort from lowest temperature to highest
			{
			x = temperature[inner];
			temperature[inner] = temperature[outer];
			temperature[outer] = x;
			didSwap = 1;
			}
		}
	
	if (didSwap == 0)
	{
		break;
	}
}

for (ctr = 0; ctr < 1; ctr++) //Informs the printf to only print the first number in the array, which is the lowest
{
	printf("\n\nThe lowest temperature in the last two weeks was: %d", temperature[ctr]); //Prints lowest temp
} 

	/************************ Highest Temp Sorting and Output *************************/

for (outer = 0; outer < 13; outer ++) //A bubble array that sorts the temperature entered from highest to lowest

{
		didSwap = 0;
		for (inner = outer; inner < 14; inner++)
		{
			if (temperature[inner] > temperature[outer]) //Arranges the array to sort from highest temperature to lowest
			{
			x = temperature[inner];
			temperature[inner] = temperature[outer];
			temperature[outer] = x;
			didSwap = 1;
			}
		}
	
	if (didSwap == 0)
	{
		break;
	}
}

for (ctr = 0; ctr < 1; ctr++)  //Informs the printf to only print the first number in the array, which is the highest
{
	printf("\n\nThe highest temperature in the last two weeks was: %d", temperature[ctr]);
} 

	printf("\n\n\nThank you for using the Weather Analyzer!\n"); //Thanks user
	
return 0;
}