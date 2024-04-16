#include <stdio.h>

int power(int x, int y){
	for(int i = 1; i < y; i++)
		x *= y;

	return x;
}

int handleIO(){
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	return number;
}

int main(){
	int x = handleIO();
	int y = handleIO();

	printf("%d powered by %d is %d\n", x, y, power(x, y));
	return 0;
}
