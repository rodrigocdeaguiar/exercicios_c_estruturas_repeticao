#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, contadorNum=0, contadorPares=0;
    while(num!=1000){
        printf("\nDigite um n�mero inteiro: ");
        scanf("%i", &num);
        if(num!=1000){
            if(num%2==0){
                printf("\nO n�mero digitado � par!");
                contadorPares++;
            }
            contadorNum++;
        }
        system("cls");
    }
    printf("\nQuantidade de n�meros digitados: %i", contadorNum);
    printf("\nQuantidade de n�meros pares digitados: %i", contadorPares);
    return 0;
}
