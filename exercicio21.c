#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    int num1, num2, i, mem, somaPares=0, multImpares=1;
    do{
        printf("Digite um número inteiro, maior que 0: ");
        scanf("%i", &num1);
    }while(num1<=0);
    do{
        printf("Digite um número inteiro, maior que 0: ");
        scanf("%i", &num2);
    }while(num2<=0);
    if(num1>num2){
        mem = num1;
        num1 = num2;
        num2 = mem;
    }
    for(i=num1; i<=num2; i++){
        if(i%2==0){
            somaPares+=i;
        }else{
            multImpares*=i;
        }
    }
    printf("\nSoma dos números pares = %i", somaPares);
    printf("\nProduto da multiplpicação dos números ímpares = %i", multImpares);
    return 0;
}
