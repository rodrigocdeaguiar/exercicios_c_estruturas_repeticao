#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=0, num, soma=0;
	while(i<10){
		printf("\nDigite um número inteiro: ");
		scanf("%i", &num);
		i++;
		soma+=num;
	}
	printf("\nSoma: %i", soma);
	return 0;
}
