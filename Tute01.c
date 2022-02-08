/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

int mark1, mark2;
float avg;

printf("Enter the marks : \n");
scanf("%d", &mark1);
scanf("\n%d", &mark2);

avg = (mark1 + mark2) / 2;

printf("average = %.1f", avg);

  
  return 0;
}

