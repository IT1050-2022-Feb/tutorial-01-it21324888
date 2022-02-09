/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int marks=1, x;
   float average;
   while(x<2){
      printf("mark%d = %d",x,marks);
      scanf("%d",&marks);
      marks=marks+1;
      x=x+1;
   }
   average=marks/2;
   printf("average = %.2f",average);
  
  return 0;
}

