#include <stdio.h>

void histogram(){
	// word counter, max word n, holder, arr 
	#define MAXWORDS 10

	int wordCounter = 0;
	int	arr[MAXWORDS];
	int length = 0;
	int holder;

	for(int i = 0; i < MAXWORDS; i++)
		arr[i] = 0; // Will contain the length of the words

	while((holder = getchar()) != EOF && wordCounter < MAXWORDS){
		if(holder == ' ' || holder == '\n' || holder == '\t'){
			arr[wordCounter] = length; // adds length to arr on the word pos
			wordCounter++; // adds +1 in the word counter, so we keep track
			length = 0; // resets the length of the word.
			
		} else if (wordCounter < MAXWORDS){
			length++;
		}
	}

	for (int i = 0;i < MAXWORDS ; i++ ) {
		if (arr[i] != NULL){
		  	for (int j = 0; j < arr[i]; j++){
	    		printf("%d", j);
	    	}
		} else {
			printf("\n");
		}
    }
}

int main(){
	// Print a histogram of the length of words in its input.
	histogram();
	return 0;
}
