#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, i=1, soma=0;
    do{
        printf("\nDigite um n�mero inteiro natural: ");
        scanf("%i", &num);
    }while(num<=0);
    for(i=0; i<=num; i++){
        soma+=i;
    }
    printf("\nSoma de todos os n�meros naturais, de 0 at� %i: %i", num, soma);
    return 0;
}
