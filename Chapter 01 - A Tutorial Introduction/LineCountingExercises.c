// © https://www.github.com/archgabs 13-04-2024, 07:30PM

// Exercise 1-8. Write a program to count blanks, tabs, and newlines.
// Exercise 1-9. Write program to copy its input to its output, replacing each string of one or  more blanks by a single blank.
// Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each  backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an  unambiguous way. 

#include <stdio.h>

int blankTabsNewlinesCounter(){
	int holder;
	int tabs = 0, newlines = 0, blanks = 0;

	while ((holder = getchar()) != EOF){
		switch (holder) {
        	case '\n':
        		newlines++;
        		break;
        	case '\t':
        		tabs++;
        		break;
        	case ' ':
        		blanks++;
        		break;
        }
	}

	printf("New Lines: %d\nTabs: %d\nBlanks: %d\n", newlines, tabs, blanks);
	
	return 0;
}

int multipleBlanksToOne(){
	// Basically i can't output more than one blank.
	int holder, blanks = 0;

	while((holder = getchar()) != EOF){
		// I'll test if they're != ' '
		if (holder != ' '){
			putchar(holder);
			blanks = 0;
		} else if (blanks == 0){
			// blanks == 0 ? putchar(holder) && blanks++ : ' '; // Works but not legible
			putchar(holder);
			blanks++;
		}
	}

	return 0;
}

void tabBackspaceBackslashToUnicode(){
	#define tab '\t'
	#define backspace '\b'
	#define backslash '\\'

	int holder; 
	
	while((holder = getchar()) != EOF){
		switch (holder) {
        	case tab:
        		printf("\\t");
        		break;
        	case backspace:
        		printf("\\b");
        		break;
        	case backslash:
        		printf("\\\\");
        		break;
        	default:
        		putchar(holder);
        		break;
        }
	}

}

int main(){
	// blankTabsNewlinesCounter();
	// multipleBlanksToOne();
	// tabBackspaceBackslashToUnicode();
	/*
	Uncomment one of these methods to unleash the Exercises.	
	*/
	return 0;
}
