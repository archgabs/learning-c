#include <stdio.h>

int main(){
	// 1.5.1 File Copying;
	int character;

	printf("Line Counting Program Starting...\n");
		
	while((character = getchar()) != EOF){
		putchar(character);
	}

	printf("Line Counting Program Ending...\n");

	printf("Exercises: 1-6 1-7\n");
	int zeroOrOne = getchar() != EOF;
	printf("Value of EOF: %d\nZero Or One: %d\n", EOF, zeroOrOne);

	// Answer: EOF Value is -1; And the expression getchar() != EOF is equal: 0.
	
	return 0;
}
