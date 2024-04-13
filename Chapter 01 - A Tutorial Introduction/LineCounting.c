// © 13-04-2024 07:21PM https://www.github.com/archgabs;
// Line Counter Program, 1.5.3;


#include <stdio.h>

int lineCounter(){
	int holder;
	int lines = 0;

	while((holder = getchar()) != EOF){
		if(holder == '\n'){
			lines++;
		}
	}

	return lines;
}

int main(){
	int lines = lineCounter();
	printf("\n\nNumber of lines... %d\n", lines);
	return 0;
}
