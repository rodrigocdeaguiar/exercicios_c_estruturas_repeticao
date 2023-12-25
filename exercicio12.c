#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, i;
    do{
        printf("\nDigite um número inteiro natural: ");
        scanf("%i", &num);
    }while(num<=0);
    printf("\nSequência em ordem decrescente:");
    for(i=num; i!=0; i--){
        printf("\n%i", i);
    }
    return 0;
}
