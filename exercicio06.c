#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=1, num, soma=0;
	float media;
	while(i<=10){
		printf("\nDigite um n�mero inteiro: ");
		scanf("%i", &num);
		i++;
		soma+=num;
	}
	media = soma/i;
	printf("\nM�dia: %.2f", media);
	return 0;
}
