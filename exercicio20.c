#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, contadorNum=0, contadorPares=0;
    while(num!=1000){
        printf("\nDigite um número inteiro: ");
        scanf("%i", &num);
        if(num!=1000){
            if(num%2==0){
                printf("\nO número digitado é par!");
                contadorPares++;
            }
            contadorNum++;
        }
        system("cls");
    }
    printf("\nQuantidade de números digitados: %i", contadorNum);
    printf("\nQuantidade de números pares digitados: %i", contadorPares);
    return 0;
}
