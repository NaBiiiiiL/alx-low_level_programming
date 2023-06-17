#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints if the number is positive,negative or 0
 * Return: Always 0
*/

int main() {
   int n;

   srand(time(NULL));

   // Generate a random number and assign it to n
   n = rand() % 201 - 100; // Generates a random number between -100 and 100

   if (n > 0) {
      printf("%d is positive\n", n);
   }
   else if (n == 0) {
      printf("%d is zero\n", n);
   }
   else {
      printf("%d is negative\n", n);
   }

   printf("\n");

   return 0;
}
