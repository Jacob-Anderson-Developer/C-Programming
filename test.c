/* UnitTestArray.c by CIS185 */

// COPY THIS CODE INTO NOTEPAD++ and save it as UnitTestArray.c
/* The code below contains some incomplete areas.  
   Follow the comments for instructions on code that needs completion.   
   When you are done, submit your TestArray.c file into the test by using the
   File Upload link found at the end of this question.*/
   
#include <stdio.h>

int main(void)
{
    int items[4] = {400, 750, 340, 1090};
    int i = 0;
    int total = 0;

    printf("TestArray by Jacob Anderson\n\n"); // Heading should display your name

    /*code a statement below that will print the LAST element of the array declared above */
    
	printf("%d", items[3]);
  
    /* code a "for" loop below - the purpose of the loop is to total all the
       elements of the array */
  
   for (i=0; i<4; i++)
	{
		total += items[i]; 
	}

   

    //the purpose of the following statement is to print the total, fix it to do so
    
	printf("\n\nTotal of all the elements is %d\n", total);

    //write code below using "if" logic- the purpose of the logic is to display the words
    // TOTAL IS HIGH if the total is more than fifteen hundred  
	
	if (total > 1500)
	{
		printf("TOTAL IS HIGH");
	}

    return 0;
    //SUBMIT THIS IN THE FILE UPLOAD LINK BELOW.
}