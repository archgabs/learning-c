// © https://www.github.com/archgabs/learning-c
// 1.5.2 Character Counting Program 
// Notes: It Counts every character, which means that \n in the buffer are also valid.

#include <stdio.h>

long characterCounter(){
	long numberOfCharacters = 0;

	while(getchar() != EOF)
		numberOfCharacters++;

	printf("Total of characters: %ld", numberOfCharacters);
	return numberOfCharacters;
}

int main(){
	characterCounter();
	return 0;
}

