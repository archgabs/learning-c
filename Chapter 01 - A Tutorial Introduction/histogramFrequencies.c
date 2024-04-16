// https://www.github.com/archgabs
/* Explicação,
   Em poucas palavras, esse aplicativo é um utilitário ASCII, ou seja, definimos que um array conterá 128 espaços na memória e definimos eles como 0;
   Quando fazemos isso, dizemos também (pela proposta) que 1, 2, 3 em equivalencia ASCII possuem 0 repetições até o presente momento;
   Ao iniciar os recebimentos de inputs, começamos a popular o array, dizendo que ele receberá +1 (++arrASCII) na posição "holder" que é o ASCII do Char que inputamos.
   De resto, é somente um loop para criarmos um histeriograma.
*/

#include <stdio.h>

void histogram(){
	#define nAscii 128

	int arrASCII[nAscii] = {0},
		holder;

	while((holder = getchar()) != EOF){
		++arrASCII[holder];
	}

	for(int i = 0; i < nAscii; i++){
		if (arrASCII[i] > 0){
			printf("%3d ... ", i);
		}
		for(int j = 0; j < arrASCII[i] && arrASCII[i] > 0; j++){
			printf(" %d ", j+1);
		}

		if (arrASCII[i] > 0){
			printf("\n");
		}
	}

}

int main(){
	histogram();
	return 0;
}
