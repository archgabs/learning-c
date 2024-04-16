#include <stdio.h>

int power(int x, int times){
	for(int i = 1; i < times; i++)
		x *= times;

	return x;
}

int main(){
	printf("%d", power(5,5));
	return 0;
}
