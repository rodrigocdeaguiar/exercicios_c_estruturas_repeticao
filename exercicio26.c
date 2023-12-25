#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    int num, i, loop=1;
    while(num<=0){
        printf("\nDigite um número inteiro, maior que 0: ");
        scanf("%i", &num);
    }
    i=num;
    while(loop==1){
    	i++;
        if(i%11==0||i%13==0||i%17==0){
            printf("\nPrimeiro número inteiro natural divisível por 11, 13 ou 17, abaixo de %i: %i", num, i);
            loop=0;
        }
    }
    return 0;
}
