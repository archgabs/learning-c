#include <stdio.h> // Standard Input and Output library

int main() {
  printf("-------------------------------------------------------\n");
  printf("Fahrenheit.c (Variables and Arithmetic Expressions 1.2)\n");
  printf("-------------------------------------------------------\n");

  float fahr, celcius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;
  
  fahr = lower;
  while(fahr <= upper)
  {
    celcius = (5.0/9.0) * (fahr-32.0); // The formula, to calculate celcius scale :)
    printf("%3.0f %6.1f\n", fahr, celcius);
    fahr += step; // Fahr in the first loop was 0, now it increases everytime by 20;
  };
  
  return 0;
};
