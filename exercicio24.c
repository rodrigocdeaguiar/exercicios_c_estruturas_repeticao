#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    int num, i, somaDiv=0;
    while(num<=0){
        printf("\nDigite um número inteiro, maior que 0: ");
        scanf("%i", &num);
    }
    for(i=num; i!=0; i--){
        if(num%i==0&&i!=num){
            somaDiv+=i;
        }
    }
    printf("\nSoma dos divisores de %i: %i", num, somaDiv);
    return 0;
}
