#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
	int num=-2, i;
    while(num<=0){
        printf("\nDigite um n�mero inteiro, maior que 0: ");
        scanf("%i", &num);
    }
    printf("\nLista dos divis�veis de %i: ", num);
    for(i=num; i!=0; i--){
        if(num%i==0){
            printf("%i ", i);
        }
    }
    return 0;
}
