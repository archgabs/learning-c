#include <stdio.h>

int main() 
{
  int input;

  printf("*-------------------------------------*\n");
  printf("* Exercise 1-6, 1-7.                  *\n");
  printf("*-------------------------------------*\n");

  printf("Verify that the expression getchar() != EOF is 0 or 1 (ex1-6)\n");

  printf("%d\n", getchar() != EOF); // Prints: 1

  printf("Write a program to print the value of EOF (ex1-7)\n");
  printf("%d\n", EOF); // Prints: 1
   

  while ((input = getchar()) != EOF) 
  {
    printf("Got: %d\n", input); // Tells the char in int

    printf("Putchar: ");
    putchar(input); // Tells the Actual Char
    printf("\n");
  }

  return 0;
};
