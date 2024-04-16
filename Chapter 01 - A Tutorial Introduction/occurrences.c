#include <stdio.h>

void occurrences(){
	int numberOfDigits[10],
		numberOfBlanks = 0,
		numberOfOthers = 0,
		holder;

	// inicializando 
	for (int i = 0; i < 10; i++)
		numberOfDigits[i] = 0;

	// pegando chars
	while((holder = getchar()) != EOF){
		if(holder >= '0' && holder <= '9'){
			// Veja que estamos comparando o valor CHAR com '0' ... '9' ou seja, ele sempre vai interpretar como o valor ASCII..
			// adicionamos +1 no valor do indice [holder - '0']
			// o holder se foi digitado um numero como i.e 1, na verdade é 
			// 49, então fazemos 49-48
			++numberOfDigits[holder - '0'];
		} else if(holder == '\n' && holder == '\t' && holder == ' '){
			numberOfBlanks++;
		} else {
			numberOfOthers++;
		}
	}	

	for(int i = 0; i < 10; i++)
		printf("\nNumber: %d; Appears: %d\n", i, numberOfDigits[i]);

	printf("\nOthers: %d\nBlanks: %d\n", numberOfOthers, numberOfBlanks);

}

int main(){
	occurrences();
	return 0;
}
