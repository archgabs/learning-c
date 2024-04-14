// © https://www.github.com/archgabs/learning-c 14-04-2024, 04:18PM.
// Exercise 1-12: Write a program that prints its input one word per line

#include <stdio.h>

void printWordPerLine(){
	#define IN  1
	#define OUT 0

	int state = OUT,
		holder;

	while((holder = getchar()) != EOF){
		if(holder != ' '){
			state = IN;
			putchar(holder);
		} else if (state == IN) {
			state = OUT;
			printf("\n");
		}
	}
}

int main(){
	printWordPerLine();
	return 0;
}
