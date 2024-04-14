// © https://www.github.com/archgabs; 14-04-2024, 11:10 AM.

#include <stdio.h>

int wordCounter(){
	#define IN 1
	#define OUT 0

	int STATE = OUT;
	int holder; 
	int words = 0;

	while((holder = getchar()) != EOF){
		if (holder == ' ' || holder == '\t' || holder == '\n'){
			// If holder are equal to any of these unicodes, it's considered out of a word, so the STATE is OUT
			STATE = OUT;
		} else if (STATE == OUT) {
			// If the test above fails, it means that it's a CHAR, so we test if the STATE is OUT
			// (to know if we are not already inside a word) and we change the state + add word count
        	STATE = IN;
        	words++;
        }
	}

	return words;
}

int main(){
	// This is a different version of wordCounter exercise because i really found theirs ugly af
	printf("\nWords: %d...\n", wordCounter());
	
	return 0;
}
