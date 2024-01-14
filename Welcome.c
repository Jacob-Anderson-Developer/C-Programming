// Welcome.c By Jacob Anderson and Brandon Smith 3/22/2021//
// Takes new student information in the form of First Name, Last Name, Middle Initial, High School and Student Number.  Then using the First Name, Last Name and Student Number the program generates a 10 character password and welcomes the student to MCC.  Input: Keyboard Output: Screen  //

#include <stdio.h>
#include <string.h> // for string functions
// Harry Brown's fixgets function-fixgets.h stored in same folder as Welcome.c
#include "fixgets.h"  

int main(void)
{
	/**************************** Declarations ***************************/
  
	char first[11] = {'\0'};          // 10 for data, plus 1 for null
	char middle [2] = {'\0'};		  // 1 for data, plus 1 for null
	char last[16] = {'\0'}; 		  // 15 for data, plus 1 for null
	char highschool[21] = {'\0'};	  // 20 for data, plus 1 for null
	char nameOutput[57] = {'\0'};     // output string, exactly sized
	char scramble[12] = {'\0'};       // output string, exactly sized
	char studentnumber[7] = {'\0'};	  // 6 for data, plus 1 for null
	
	/***************************** Input Section ************************/
	
	printf ("Playing with Strings\n\n");
	printf("First Name?  ");
	fixgets(first, 11, stdin); // Accepts value for a string from keyboard
	
	printf("Middle Initial?   ");
	fixgets(middle, 2, stdin);
	
	printf("Last Name?   ");
	fixgets(last, 16, stdin);
	
	printf("Student Number?   ");
	fixgets(studentnumber, 7, stdin);
	
	printf("Name of High School?   ");
	fixgets(highschool, 21, stdin);
	
	/*************************** Print Strings ***************************/
	
	strcpy(nameOutput, "\nWelcome to MCC, "); // beginning value in nameOutput
	strcat(nameOutput, first);      		// concatenate
	strcat(nameOutput, " "); 				// concatenate
	strcat(nameOutput, middle);				// concatenate
	strcat(nameOutput, ". ");       		// concatenate
	strcat(nameOutput, last);       		// concatenate
	strcat(nameOutput, " #");       		// concatenate
	strcat(nameOutput, studentnumber);  	// concatenate
	strcat(nameOutput, " from ");       	// concatenate
	strcat(nameOutput, highschool);     	// concatenate
	strcat(nameOutput, "!");       			// concatenate
	printf("%s\n\n", nameOutput);   		// print entire string
	

	/************************ Password Generation ************************/
	
	scramble[0] = last[0];  //This password is comprised of the first three elements of the last name, 
	scramble[1] = last[1];  //then the first three elements of the first name, and the first 4 elements of the student number
	scramble[2] = last[2];
	scramble[3] = first[0];
	scramble[4] = first[1];
	scramble[5] = first[2];
	scramble[6] = studentnumber[0];
	scramble[7] = studentnumber[1];
	scramble[8] = studentnumber[2];
	scramble[9] = studentnumber[3];
	scramble[10] - '\0'; // null terminator
	 
	
	
	printf("Your password is %s",strlwr(scramble)); //Gives student their password
	
	return 0;
}
