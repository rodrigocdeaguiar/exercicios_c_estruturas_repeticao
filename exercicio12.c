#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, i;
    do{
        printf("\nDigite um n�mero inteiro natural: ");
        scanf("%i", &num);
    }while(num<=0);
    printf("\nSequ�ncia em ordem decrescente:");
    for(i=num; i!=0; i--){
        printf("\n%i", i);
    }
    return 0;
}
