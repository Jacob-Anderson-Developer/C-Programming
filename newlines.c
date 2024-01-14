 /*	newlines.c by CIS185
	This program demonstrates the use of escape sequences*/
	
 /* Input:   Keyboard
    Output:  Screen */
	
#include <stdio.h>
int main()
{
	int hours_worked;
	int hoursWorked;
	float payRate;
	float tax2020;
	//float 2020tax;
	
	printf("Programming is * fun!\n\n");
	printf ( "Absolutely!\n\n\n\n");

	printf("Programming is fun!");
	printf ( "Absolutely!\n");

	printf("Programming ");
	printf("is ");
	printf("fun\n\n\n");

	printf ("Programming");
	printf("is ");
	printf("fun\n\n\n");

	printf ("Programming \n");
	printf("is \n");
	printf("fun\n\n\n");

	printf ("Isn't it?\n\n");

	printf("We can make the \\ character ; print\n\n");

	printf ("C \"How\" to Program\n\n");

	printf("Programming\tis\tfun\n");

	printf("\n\n\n           Here is some more\n\n");
	
	printf("Can I print ( and ) \n");
	
	printf("Can I print /* ?\n\n");
	
	
	/*how to print a % sign when already using it for a conversion specifier */
	int howMuch = 0;
	printf("How much fun is this on a scale of 0 to 100? ");
	scanf("%d", &howMuch);
	printf("OK, so this is %d%% fun\n", howMuch); /*note the double percent signs */

	return 0;
}
