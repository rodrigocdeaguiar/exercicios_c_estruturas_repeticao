#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, i;
    do{
        printf("\nDigite um número inteiro par: ");
        scanf("%i", &num);
    }while(num%2==1||num<=0);
    printf("\nSequência dos números pares em ordem crescente:");
    for(i=1; i<num; i++){
        if(i%2==0){
            printf("\n%i", i);
        }
    }
    return 0;
}
