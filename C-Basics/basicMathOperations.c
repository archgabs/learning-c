#include <stdio.h>

int main()
{
  float finput, linput;
  float addition, subtraction, multiplication, division;

  printf("|---------------------------------------------|\n");
  printf("| basicMathOperations.c                       |\n");
  printf("|---------------------------------------------|\n");

  printf("Enter a number: ");
  scanf("%f", &finput);

  printf("Enter a number: ");
  scanf("%f", &linput);

  addition = finput + linput;
  subtraction = finput - linput;
  multiplication = finput * linput;
  division = finput / linput;

  printf("%6.2f + %6.2f = %6.2f\n", finput, linput, addition);
  printf("%6.2f - %6.2f = %6.2f\n", finput, linput, subtraction);
  printf("%6.2f * %6.2f = %6.2f\n", finput, linput, multiplication);
  printf("%6.2f / %6.2f = %6.2f\n", finput, linput, division);

  return 0;
};
