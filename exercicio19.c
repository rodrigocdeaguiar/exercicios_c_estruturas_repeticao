#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, i=0, centenas, dezenas, unidades;
    do{
        printf("\nDigite a quantidade de n�meros que ser�o digitados: ");
        scanf("%i", &num);
    }while(num<100 && num>=1000);
    centenas = num/100;
    printf("\nO n�mero digitado � formado por:");
    printf("\n\t%i centenas", centenas);
    dezenas = (num-(centenas*100))/10;
    printf("\n\t%i dezenas", dezenas);
    unidades = num-(centenas*100)-(dezenas*10);
    printf("\n\t%i unidades", unidades);
    return 0;
}
