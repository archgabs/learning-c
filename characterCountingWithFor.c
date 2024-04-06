#include <stdio.h>

int main()
{
  int nChars;
  
  for (nChars = 0; getchar()!=EOF;nChars++) {};
    printf("\nNumber of chars:\t%d\n", nChars);
};
