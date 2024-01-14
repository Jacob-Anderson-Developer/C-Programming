#include <stdio.h>
#include <string.h> // for string functions
// Harry Brown's fixgets function-fixgets.h stored in same folder as Welcome.c
#include "fixgets.h"  

float *myPointer;

float myValue = 0.0f, credits = 1.0f, tuitioncost = 0.0f;

int main(void)


{
	
	printf("stuff\n");
	
	myPointer = &credits;
	
	myValue = *myPointer;
	
	printf("The content of credits is as follows %.2f\n", *myPointer);
	
	printf("The address of credits is %u\n", &credits);
	
	tuitioncost = *myPointer * 99.50;
	
	printf(" %f", myValue);
	
	printf(" %f", tuitioncost);
	
	return 0;
	
}