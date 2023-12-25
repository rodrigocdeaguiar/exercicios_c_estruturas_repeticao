#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    int num = 999, soma=0;
    for(num; num!=0; num--){
        if(num%3==0||num%5==0){
            soma+=num;
        }
    }
    printf("Soma de todos os múltiplos de 3 ou 5 abaixo de 1000: %i", soma);
    return 0;
}
