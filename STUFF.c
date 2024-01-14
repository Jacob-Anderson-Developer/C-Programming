#include <stdio.h>

 int main(void)

  {

  /* Declaration */

  int grade_level;

  /* Validate Input */

  do

    {

    printf("What grade is the student in? ");

    scanf("%d", &grade_level);

    }

  while(grade_level < 0 || grade_level > 13);
  
  /* Screen output */

  printf("The grade level is %d\n", grade_level);

  return 0;

  }