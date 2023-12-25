#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, i;
    do{
        printf("\nDigite um número inteiro ímpar: ");
        scanf("%i", &num);
    }while(num%2==0||num<=0);
    printf("\nSequência dos números ímpares em ordem crescente:");
    for(i=0; i<num; i++){
        if(i%2!=0){
            printf("\n%i", i);    
        }
    }
    return 0;
}
