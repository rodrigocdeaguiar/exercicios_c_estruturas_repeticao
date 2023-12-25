#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    int cont=0;
    float media, nota=10, soma=0;
    while(nota>=10&&nota<=20){
        printf("Digite um número inteiro, maior que 0: ");
        scanf("%f", &nota);
        soma+=nota;
        cont++;
    }
    media = soma/cont;
    printf("Média das notas: %.1f", media);
}
