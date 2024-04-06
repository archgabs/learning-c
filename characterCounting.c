#include <stdio.h>

int main() {
  int numberOfChars;
  int inputChar;

  inputChar = getchar();
  numberOfChars = 0;

  while (inputChar != EOF) {
    printf("Char: %d\n", inputChar);

    printf("Putchar: ");
    putchar(inputChar);

    printf("\n");

    numberOfChars++;
    inputChar = getchar();
  };
  printf("Number of chars in total: %d", numberOfChars);

  return 0;
};
