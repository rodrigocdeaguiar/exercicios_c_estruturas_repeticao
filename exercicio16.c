#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, i;
    do{
        printf("\nDigite um n�mero inteiro �mpar: ");
        scanf("%i", &num);
    }while(num%2==0||num<=0);
    printf("\nSequ�ncia dos n�meros �mpares em ordem decrescente:");
    for(i=num; i!=0; i--){
        if(i%2!=0){
            printf("\n%i", i);    
        }
    }
    return 0;
}
