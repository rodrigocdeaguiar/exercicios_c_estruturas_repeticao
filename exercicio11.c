#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, i;
    do{
        printf("\nDigite um número inteiro natural: ");
        scanf("%i", &num);
    }while(num
	<=0);
    printf("\nSequência em ordem crescente:");
    for(i=1; i<=num; i++){
        printf("\n%i", i);
    }
    return 0;
}
