#include <stdio.h>

int main(){

	int x;
	int y;

	printf("Digite um número: \n");
	scanf("%d",&x);

	printf("Digite outro número: \n");
	scanf("%d",&y);

	int mult = (x * y);

	printf("A multiplicação dos números digitados: %d \n ",mult);

}
