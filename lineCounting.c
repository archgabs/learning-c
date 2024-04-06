#include <stdio.h>

/*
+--------------------------------+----------------------------------------+
| Github - Códigos iniciais em C | https://github.com/archgabs/learning-c |
+--------------------------------+----------------------------------------+
*/

int main()
{
  int lineCount, charCount, current;
  lineCount = 0;
  charCount = 0;

  while((current = getchar()) != EOF)
  {
    if (current == '\n')
    {
      ++lineCount;
    } else {
      ++charCount;
    }
  }  

  printf("Number of lines: %d\tNumber of Chars: %d", lineCount, charCount);
  
  return 0;
};
