#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, i;
    do{
        printf("\nDigite um n�mero inteiro natural: ");
        scanf("%i", &num);
    }while(num
	<=0);
    printf("\nSequ�ncia em ordem crescente:");
    for(i=1; i<=num; i++){
        printf("\n%i", i);
    }
    return 0;
}
