#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, i=1, soma=0;
    do{
        printf("\nDigite um número inteiro natural: ");
        scanf("%i", &num);
    }while(num<=0);
    for(i=0; i<=num; i++){
        soma+=i;
    }
    printf("\nSoma de todos os números naturais, de 0 até %i: %i", num, soma);
    return 0;
}
