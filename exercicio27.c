#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    int num, i;
    float mediaH = 1, soma=0;
    while(num<=0){
        printf("\nDigite um n�mero inteiro, maior que 0: ");
        scanf("%i", &num);
    }
    for(i=num; i!=0; i--){
        mediaH+=(1/i);
    }
    printf("\nN�mero harm�nica de %i = %f", num, mediaH);
    return 0;
}
