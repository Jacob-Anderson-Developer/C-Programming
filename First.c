/* First.c by Jacob Anderson 1/13/2021 */

/*This program is for use in CIS 185 Homework 1.

Comments are written to help the human reader of your program, and do not affect the efficiency of your program.

C was one of the first languages to use lower case; C is case-sensitive.
*/

/*The #include <stdio.h> preprocessor directive must be in place in order for the programmer to be able to use input and output functions. stdio.h is a header file that is in the C Standard Library, whic is part of the compiler environment the programmer installs on the computer.
*/
#include <stdio.h>

int main(void) /* You will also see main(void) coded as main () */
{
	printf("First application by Jacob Anderson\n\n\n")
	printf("This is a demonstration program for CIS185.\n\n");
	printf("Keying it will help me learn how important\n");
	printf("syntax is, which can be very detail-oriented!\n\n");
	printf("\n\nSo far, I think this experience is\n");
	printf("very fun!  \n\n");
	
	return 0;
}

/* A return statement is used to transer control and a value back to the point of a call, which in this case is the Operating System. The 0 indicates the program ran successfully, which doesn't necessarily mean it produced the desired outcome. */